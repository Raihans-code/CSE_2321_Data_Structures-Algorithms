#include<stdio.h>

#define Max_Cap 100

void Binary_Search(int arr[],int size,int target)
{
    int left = 0,right = size - 1;

    int mid = 0;
    while(left<=right)
    {
        mid = left + ((right-left)/2);
        if(arr[mid]==target)
        {
            printf("Found! at index: %d",mid+1);
            return;
        }
        else if(arr[mid]<target) left = mid + 1;
        else right = mid - 1;
    }
    printf("Not found!\n");
}

int main()
{
    int arr[Max_Cap];
    int total_size = 0;
    printf("Enter Array Size :");
    scanf("%d",&total_size);

    for(int i=0;i<total_size;++i)
    {   
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter Element to Search:");
    scanf("%d",&target);
    
    Binary_Search(arr,total_size,target);

    return 0;
}