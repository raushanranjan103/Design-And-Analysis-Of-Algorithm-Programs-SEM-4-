//knapsack problem
#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}

int knapsack(int c,int wt[],int val[],int n)
{
    int i,j;
    int k[n+1][c+1];
    
for( i=0;i<=n;i++)
{
    for( j=0;j<=c;j++)
    {
        if(i==0||j==0)
        k[i][j]=0;

        else if(wt[i-1]<=j)
        k[i][j]=max(k[i-1][j],val[i-1]+k[i-1][j-wt[i-1]]);
        
        else
        k[i][j]=k[i-1][j];
    }
}
for( i=0;i<=n;i++)
{
    for( j=0;j<=c;j++)
    {
        printf("%5d",k[i][j]);
    }
  printf("\n");  
}
return k[n][c];
}

void main()
{
    int val[10],wt[10],c,n,i;
    printf("\n enter no of elements :");
    scanf("%d",&n);
    printf("enter the weight and profit \n");
    for(i=0;i<n;i++)
    {
    scanf("%d%d",&wt[i],&val[i]);
    }
    printf("\n enter the max capacity of knapsack");
    scanf("%d",&c);
    printf("\n the maximum capacity of knapsack= %d",knapsack(c,wt,val,n));
}

