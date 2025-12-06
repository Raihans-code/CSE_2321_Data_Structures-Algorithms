#include<iostream>
using namespace std;

void Linear_Search(int *arr,int row,int col,int key)
{
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            if(*(arr+i*col+j)==key)
            {
                cout <<"Element " << key << " found at arr["<<i<<"]["<<j<<"]"<<endl;
                return;
            }
        }
    }
    cout << "Element Not found!" << endl;
}

int main()
{
    int row,col;
    printf("Enter number of Rows:");
    scanf("%d",&row);
    printf("Enter number of Columns:");
    scanf("%d",&col);
    int arr[row][col];
    printf("Enter Matrix Elements:\n");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("Element[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int target;
    cout << "Enter Target:";
    cin >> target;
    Linear_Search((int*)arr,row,col,target);
    printf("Matrix Elements :\n");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

}