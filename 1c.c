//C program for selection sort
#include<stdio.h>
#include<stdlib.h>

void insert(int A [],int n)
{
    for(int i=0;i<n;i++)
     {scanf("%d",&A[i]);}
}

void print(int A[],int n)
{
    for(int i=0;i<n;i++)
     {printf(" %d \n",A[i]);}
}

void selcsort(int A[],int n)
{int i, j;
for(i=0;i<n-1;i++)
 {
    for(j=i+1;j<n;j++)
  {
    if(A[i]>A[j])
    {
     int swap=A[i];
     A[i]=A[j];
     A[j]=swap;
    }

  }
 }

}

void main()
{
    int n ,i, a[10];
    printf("enter the no of elements u wamt to insert \n ");
    scanf("%d",&n);
    printf("enter the values in the array \n ");
    insert(a,n);
    printf("array before sorting will be \n  ");
    print(a,n);
    selcsort(a,n);
    printf("array after  sorting will be \n  ");
    print(a,n);
}