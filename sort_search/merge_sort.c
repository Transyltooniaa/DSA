#include<stdio.h>
#include<stdlib.h>



void merge(int low , int mid , int high , int arr[])
{
    int i,j,k,barr[100];
    i = low;
    j = mid+1;
    k = low;
    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
        {
            barr[k] = arr[i];
            i++;
            k++;
        }
        
        else
        {
            barr[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i <= mid)
    {
        barr[k] = arr[i];
        k++;
        i++;
    }

    while(j <= high)
    {
        barr[k] = arr[j];
        k++;
        j++;
    }
    
    for(int i = low; i <= high; i++)
        arr[i] = barr[i];

    
}


void merge_sort(int low , int high , int arr[])
{   
    int mid;
    if(low < high)
    {
    
        mid = (low+high)/2;
        merge_sort(low,mid,arr);
        merge_sort(mid+1,high, arr);
        merge(low,mid,high,arr);
    }

}

int main()
{
    int arr[] = {2,7,5,3,7,8,9,3,2,1,6,4};
    merge_sort(0,11,arr);
    for(int i = 0 ; i < 12 ; i++)
        printf("%d ",arr[i]);
    return 0;
}