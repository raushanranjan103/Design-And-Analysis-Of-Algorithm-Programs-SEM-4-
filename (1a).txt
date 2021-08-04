//C program for bubble sort
#include<stdio.h>
#include<stdlib.h>
int temp;

void insert(int A[],int n)
{
    for(int i=0;i<n;i++)
    {   
    scanf("%d",&A[i]);
    }
}


void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf(" %d \n",A[i]);
    }
}


void bubblesort(int A[],int n)
{

for(int i=0;i<n-1;i++)
 {
     for(int j=0;j<n-i-1;j++)
     {
         if(A[j+1]<A[j])
         {
             temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
         }

     }
}

}

void main()
{
    int n, i, a[10];
    printf("enter the no of elements in the array\n");
    scanf("%d",&n);
    printf("enter the values in the array \n ");
    insert(a,n);
    printf("array before sorting will be \n  ");
    print(a,n);
    bubblesort(a,n);
    printf("array after  sorting will be \n  ");
    print(a,n);
}