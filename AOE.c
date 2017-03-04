#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <stdlib.h>  
#include<windows.h>
#define MaxVerNum 20  

int visited[MaxVerNum];

typedef char VertexType;

typedef struct ArcNode
{
	int adjvex;                                         //�û�ָ��Ķ���λ��  
	struct ArcNode * nextarc;          //ָ����һ������  
	int info;                                      //Ȩֵ��Ϣ  
}ArcNode;                                              //�߽������  

typedef struct VNode
{
	VertexType data;
	int indegree;
	ArcNode * firstarc;
}VNode, Adjlist[MaxVerNum];

typedef struct
{
	Adjlist vertices;            //�ڽӱ�  
	int vernum, arcnum;             //�������ͻ���  
}ALGraph;

//���ҷ��ϵ������������е��±�  
int LocateVer(ALGraph G, char u)
{
	int i;
	for (i = 0; i < G.vernum; i++)
	{
		if (u == G.vertices[i].data)
			return i;
	}
	if (i == G.vernum)
	{
		printf("Error u!\n");
		exit(1);
	}
	return 0;
}

//����ͼ���ڽӾ���  
void CreateALGraph(ALGraph &G)
{
	int i, j, k, w;
	char v1, v2;
	ArcNode * p;
	printf("���붥�����ͻ���: ");
	scanf("%d %d", &G.vernum, &G.arcnum);
	printf("�����붥��!\n");
	for (i = 0; i < G.vernum; i++)
	{
		printf("������� %d ������: \n", i);
		fflush(stdin);
		scanf("%c", &G.vertices[i].data);
		G.vertices[i].firstarc = NULL;
		G.vertices[i].indegree = 0;
	}

	for (k = 0; k < G.arcnum; k++)
	{
		printf("�����뻡�Ķ������ӦȨֵ(v1, v2, w): \n");
		//������뻺����  
		fflush(stdin);
		scanf("%c %c %d", &v1, &v2, &w);
		i = LocateVer(G, v1);
		j = LocateVer(G, v2);
		p = (ArcNode *)malloc(sizeof(ArcNode));
		p->adjvex = j;
		p->info = w;
		p->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p;
		G.vertices[j].indegree++;                   //vi->vj, vj��ȼ�1  
	}
	return;
}

//��ͼ�Ĺؼ�·������  
void CriticalPath(ALGraph G)
{
	int i, k, e, l;
	int * Ve, *Vl;
	ArcNode * p;

	//*****************************************  
	//��������ʱ�����緢��ʱ��  
	//*****************************************  

	Ve = new int[G.vernum];
	Vl = new int[G.vernum];

	for (i = 0; i < G.vernum; i++)              //ǰ��  
		Ve[i] = 0;

	for (i = 0; i < G.vernum; i++)
	{
		ArcNode * p = G.vertices[i].firstarc;
		while (p != NULL)
		{
			k = p->adjvex;
			if (Ve[i] + p->info > Ve[k])
				Ve[k] = Ve[i] + p->info;
			p = p->nextarc;
		}
	}
	//*****************************************  
	//����������ٷ���ʱ��  
	//*****************************************  
	for (i = 0; i < G.vernum; i++)
		Vl[i] = Ve[G.vernum - 1];
	for (i = G.vernum - 2; i >= 0; i--)                 //����  
	{
		p = G.vertices[i].firstarc;
		while (p != NULL)
		{
			k = p->adjvex;
			if (Vl[k] - p->info < Vl[i])
				Vl[i] = Vl[k] - p->info;
			p = p->nextarc;
		}
	}
	//******************************************  
	for (i = 0; i < G.vernum; i++)
	{
		p = G.vertices[i].firstarc;
		while (p != NULL)
		{
			k = p->adjvex;
			e = Ve[i];              //���翪ʼʱ��Ϊʱ��vi�����緢��ʱ��  
			l = Vl[k] - p->info;             //��ٿ�ʼʱ��  
			char tag = (e == l) ? '*' : ' '; //�ؼ��  
			printf("(%c, %c), e = %2d, l = %2d, %c\n", G.vertices[i].data, G.vertices[k].data, e, l, tag);
			p = p->nextarc;
		}
	}
	delete[] Ve;
	delete[] Vl;
}
int main()
{
	ALGraph G;
	printf("�����ǲ���ͼ�Ĺؼ�·���ĳ���\n");
	CreateALGraph(G);
	CriticalPath(G);
	system("pause");
	return 0;
}