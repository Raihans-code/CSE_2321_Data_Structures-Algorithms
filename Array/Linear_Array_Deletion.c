#include<stdio.h>

#define Max_Cap 100

int main()
{
    int arr[Max_Cap];
    int total_size = 0;
    int delete_index = 0;
    printf("Enter Array Size :");
    scanf("%d",&total_size);

    for(int i=0;i<total_size;++i)
    {   
        printf("Array[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array = ");
    for(int i=0;i<total_size;++i) printf("%d ",arr[i]);
    printf("\n\n");

    printf("Enter Index to Delete:");
    scanf("%d",&delete_index);
    for(int i=delete_index-1;i<total_size;++i)
    {
        arr[i] = arr[i+1];
    }
    printf("Deleted element from idex: %d",delete_index);
    printf("New Array = ");
    for(int i=0;i<total_size-1;++i) printf("%d ",arr[i]);
    printf("\n\n");


    return 0;
}