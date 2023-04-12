#include<stdio.h>
#include<stdlib.h>


void InsertionSort(int arr[] , int n)
{
    for(int j = 1 ; j < n ; j++)
    {
        int key = arr[j];
        int i = j-1;

        while(i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}



void PrintArray(int arr[] , int n)
{
    for(int i = 0 ; i < n; i++)
        printf("%d ",arr[i]);

    printf("\n");
}


int main()
{
    int arr[] = {4,5,6,2,16,8,4,2,9,4};
    int n = sizeof(arr)/ sizeof(arr[1]);
    PrintArray(arr,n);
    InsertionSort(arr , n);
    PrintArray(arr,n);
    return 0;
}