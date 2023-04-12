#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void BubbleSort(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-i-1 ; j++)
        { 
            if(arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}



void PrintArray(int arr[] , int n)
{
    for(int i = 0 ; i < n; i++)
        printf("%d",arr[i]);

    printf("\n");
}


int main()
{
    int arr[] = {4,5,6,2,16,8,4,2,9,4};
    int n = sizeof(arr)/ sizeof(arr[1]);
    PrintArray(arr,n);
    BubbleSort(arr ,n);
    PrintArray(arr,n);
    return 0;
}