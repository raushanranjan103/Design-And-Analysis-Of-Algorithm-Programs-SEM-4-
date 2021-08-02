//C program for merge sort
#include <stdio.h>

void insert(int A[],int n)
{
    int i,j;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];//B[k] is a tempeorary array 
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)    
    {
        B[k] = A[i];  // this loop will  copy remaining 1/2 array elements  as it is
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];  //this loop will copy remaining other 1/2 array elements  as it is
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];  //this loop will copy array elementrs from tempeorary array to main array
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int A[10],n;
    printf("enter the no of elements in arrays\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    insert(A,n);
    printArray(A, n);
    mergeSort(A, 0, n-1);
    printArray(A, n);
    return 0;
}