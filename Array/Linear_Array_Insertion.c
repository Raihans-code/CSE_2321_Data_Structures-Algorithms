#include<stdio.h>

#define Max_Cap 100

int main()
{
    int arr[Max_Cap];
    int total_size = 0;
    int insert_index = 0;
    int element = 0;
    printf("Enter Array Size :");
    scanf("%d",&total_size);

    for(int i=0;i<total_size;++i)
    {   
        printf("Array[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array = ");
    for(int i=0;i<total_size;++i) printf("%d ",arr[i]);
    printf("\n\n");

    printf("Enter Index to Insert:");
    scanf("%d",&insert_index);
    printf("Enter Element:");
    scanf("%d",&element);
    for(int i=total_size-1;i>=insert_index-1;--i)
    {
        arr[i] = arr[i-1];
    }
    arr[insert_index-1] = element;

    printf("New Array = ");
    for(int i=0;i<total_size;++i) printf("%d ",arr[i]);
    printf("\n\n");


    return 0;
}