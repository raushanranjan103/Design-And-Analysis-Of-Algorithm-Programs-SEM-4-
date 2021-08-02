//Warshalls algo
#include<stdio.h>
#include<stdlib.h>
int a[10][10],n;


void path()
{int i,j,k;
for(k=0;k<n;k++)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((a[i][j])||(a[i][k]&&a[k][j]))//think about the column first
            a[i][j]=1;
        
        }
    }
}
}

void main()
{
    int i,j;
    printf("\n enter n of vertices");
    scanf("%d",&n);
    printf("\n enter the adjacent  matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        
        }
    }
    path();
    printf("\n the  transitive closure matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }
}