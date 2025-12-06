#include<iostream>

using namespace std;

void Bubble_Sort(int arr[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        bool swapped = false;
        for (int j = 1; j < length - i; ++j)
        {
            if (arr[j] < arr[j - 1])
            {
                int tmp = arr [j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main()
{
    int n;
    cout << "Enter Size :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i ) cin >> arr[i];

    Bubble_Sort(arr,n);

    for (auto i : arr) cout << i << " ";
    cout << endl;
}