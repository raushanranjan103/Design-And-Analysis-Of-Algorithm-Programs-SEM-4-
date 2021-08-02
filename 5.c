#include<stdio.h>
#include<stdlib.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[],int n)
{for(int i=0;i<n;i++)
{printf( "%d ",arr[i]);
}}

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    //left child is greater than root
    if(l<n&&arr[l]>arr[largest])
    {
        largest=l;
    }
    //right child is greater than root
    if(r<n&&arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);

    }
    
}
void heapsort(int arr[],int n)
{
    int i;
    for(i=(n/2-1);i>=0;i--)
    {
        heapify(arr,n,i);

    }
    for(i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);

    }
}

void main()
{
    int arr[]={12,11,13,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the array is \n");
    printArray(arr,n);
    heapsort(arr,n);
    printf("the sorted array is \n");
    printArray(arr,n);
}


    

