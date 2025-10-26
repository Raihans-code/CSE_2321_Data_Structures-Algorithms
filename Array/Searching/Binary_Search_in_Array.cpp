#include<bits/stdc++.h>
using namespace std;

void Binary_Search(const vector<int>&arr,int target)
{
  int size = arr.size();
  int left = 0;
  int right = size-1;
  int mid;
  while(left<=right)
  {
    mid = left + ((right-left)/2);

    if(arr[mid]==target)
    {
      cout << target << " found at index: " << mid+1 << endl;
      return;
    }
    else if(arr[mid]>target) right = mid-1;
    else if(arr[mid]<target) left = mid+1;
  }
  cout << "Not found!" << endl;
}

int main()
{
  cout << "Enter Array Size:";
  int n;
  cin >> n;
  vector<int>arr(n);
  cout << "Enter Elements:"<<endl;
  for(int i=0;i<n;++i) cin >> arr[i];
  int item;
  cout << "Enter Item to find:";
  cin >> item;
  Binary_Search(arr,item);

  return 0;
}