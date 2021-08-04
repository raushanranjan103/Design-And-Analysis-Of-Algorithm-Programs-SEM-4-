//C program for quick sort
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

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do       //minimum 1 time it should execute
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j] ...in this pivot element is exchanged with a[j] as j>=i
    temp = A[low];//dont use pivot here because it wont reflect changes in main fn
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray   and partition index alredy sorted so no need to include it
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    
    int A[10], n ;
     printf("enter the no of elements in arrays\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    insert(A,n);
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}