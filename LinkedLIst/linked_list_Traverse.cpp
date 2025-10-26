#include<iostream>
using namespace std;
class Node
{
  public:
  int info;
  Node* link;
  Node(int info)
  {
    this-> info = info;
    this-> link = NULL;
  }
};

int main()
{
  int n,item;
  cout << "Enter Number of Data:";
  cin >> n;

  Node *start = NULL;

  cout << "Enter Data :" << endl;
  for(int i = 0;i<n;++i)
  {
    int val;
    cin >> val;
    Node *temp = new Node(val);
    if(start==NULL)
    {
      start = temp;
    }
    else
    {
      temp->link = start;
      start=temp;
    }
  }
  Node* ptr = start;
  cout << "Enter item to find :";
  cin >> item;
  bool found = false;
  while(ptr!=NULL)
  {
    // cout << ptr->info << "->";
    if(item==ptr->info){ 
      cout <<"item found at " << ptr << endl;
      found = true;
      return 0;
    }
    ptr = ptr->link;
  }
  if(!found) cout << "not found.";
  cout << endl;
  return 0;
}