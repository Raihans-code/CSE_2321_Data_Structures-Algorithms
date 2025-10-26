#include<iostream>
#define Max_Cap 51
using namespace std;

int main()
{
    int depth, row, col;
    cout << "Enter Depth :";
    cin >> depth;
    cout << "Enter Row:";
    cin >> row;
    cout << "Enter Col:";
    cin >> col;
    int arr[depth][row][col];

    for (int i = 0; i < depth; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < col; ++k) 
            {
                cout <<"Array["<<i<<"]["<<j<<"]["<<k<<"] = ";
                cin >> arr[i][j][k];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < depth; ++i)
    {
        cout << "Depth = " <<i+1 <<endl;
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < col; ++k)
            {
                cout << &arr[i][j][k] << " " ;
            } cout << endl;
        }
    }
}