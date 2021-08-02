//Floyds algo
#include<stdio.h>
#include<stdlib.h>
int a[10][10],n;

int min(int a,int b)
{ 
      return(a<b)?a:b;
}

void path()
{int i,j,k;
for(k=0;k<n;k++)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
        }
    }
}
}

void main()
{
    int i,j;
    printf("\n enter n of vertices");
    scanf("%d",&n);
    printf("\n enter the cost matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    path();
    printf("\n the final distance matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }
}