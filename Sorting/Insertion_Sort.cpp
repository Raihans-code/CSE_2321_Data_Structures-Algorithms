#include<iostream>

using namespace std;
void Insertion_Sort(int arr[], int length)
{
    for (int i = 1 ; i < length ; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr [j + 1] =  key;
    }
}
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : \n";
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    Insertion_Sort(arr,n);

    for (auto i : arr) cout << i << " ";

    cout << endl;
}