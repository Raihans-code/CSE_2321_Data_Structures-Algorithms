#include<stdio.h>

#define Max_Cap 100

int main()
{
    int arr[Max_Cap];
    int total_size = 0;
    int key = -1,loc = -1;
    printf("Enter Array Size :");
    scanf("%d",&total_size);

    for(int i=0;i<total_size;++i)
    {   
        printf("Array[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to Search:");
    scanf("%d",&key);
    for(int i=0;i<total_size;++i)
    {
        if(key==arr[i])
        {
            loc = i;
            break;
        }
    }
    if(loc) printf("Element %d found at Index:%d",key,loc);
    else printf("Element Not found!\n");
    
    // printf("Array = ");
    // for(int i=0;i<total_size;++i) printf("%d ",arr[i]);
    // printf("\n\n");




    return 0;
}