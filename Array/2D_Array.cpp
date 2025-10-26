#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of Rows:";
    cin >> m;
    cout << "Enter number of Columns:";
    cin >> n;
    int arr[m][n];
    // vector<vector<int>>arr(m, vector<int>(n)); //this is stored differently than array
    cout << "Enter Elements:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        { 
            cout << "Array["<<i<<"]["<<j<<"] = ";
            cin >> arr[i][j];

        }
    }
    cout <<"Matrix Elements:"<< endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << &arr[i][j] << endl;
        }
        cout << endl;
    }
}