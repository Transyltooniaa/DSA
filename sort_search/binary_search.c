#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[] , int n , int element)
{
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(low<high)
    {
        mid = (low + high)/2;

        if(arr[mid] == element)
            return mid;
        
        else if(arr[mid] < element)
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    return -1;
}


int main()
{
    int arr[] = {2,7,5,3,7,8,9,3,2,1,6,4};
    int index = binary_search(arr,12 ,8);
    printf("index of the desired element is : %d\n",index);
    return 0;
}