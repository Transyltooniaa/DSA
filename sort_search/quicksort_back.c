#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


int sort(int low , int high , int arr[])
{
    int i,j;
    int pivot = arr[high];

    i = low;
    j = high-1;
   
    while(i < j)
    {
        while(arr[i] < pivot)
            i++;
        
        while(arr[j] >= pivot)
            j--;

        if(i < j)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        
    }

    int temp = arr[j+1];
    arr[j+1] = arr[high];
    arr[high] = temp;

    return j+1 ;
}

void quickSort(int arr[] , int low , int high)
{
    if(low < high)
    {
        int partition = sort(low, high, arr);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);   
    }
}

int main()
{
    int A[] = {2,7,8,9,4,5,7,6};
    int n = 8;
   
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
