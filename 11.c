//dijkstra algo
#include<stdio.h>
#include<stdlib.h>
//Dijkstras algo
#define MAX 10
#define INF 99999

void dijk(int G[MAX][MAX],int n,int start)
{
    int cost[MAX][MAX],dist[MAX],visited[MAX],pred[MAX];
    int i,j,count,mindist,nextnode;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(G[i][j]==0)
            {
                cost[i][j]=INF;
            }
            else{
                cost[i][j]=G[i][j];
            }
        }
    
    }
    for(i=0;i<n;i++)
    {
        dist[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }
dist[start]=0;
visited[start]=1;
count=1;
while(count<n-1)
{
    for(i=0;i<n;i++)
    {
        if(dist[i]<mindist&&!visited[i])
        {
            mindist=dist[i];
            nextnode=i;
        }
    }
    visited[nextnode]=1;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            if((mindist+cost[nextnode][i]<dist[i] ))
            {
                dist[i]=mindist+cost[nextnode][i];
                pred[i]=nextnode;
            }
        }
    }
count++;
}

for(i=0;i<n;i++)
{
    if(i!=start)
    {
        printf("the distance of node %d is %d\n",i,dist[i]);
        printf("the path is:%d",i);
        j=i;
        do{
            j=pred[j];
            printf(",-%d",j);
        }while (j!=start);
    
         }
         printf("\n"); 
    }
}
void main()
{
    int G[MAX][MAX], n,start;
    int i,j;
    printf("no of vertices:\n");
    scanf("%d",&n);
    printf("enter the graph:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

    {
        scanf("%d",&G[i][j]);// 
    }
    }
    printf("enter the starting node");
    scanf("%d",&start);
    dijk(G,n,start);

}