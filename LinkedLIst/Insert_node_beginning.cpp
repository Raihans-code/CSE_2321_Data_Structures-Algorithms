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
void print_List(Node* start)
{
  Node* ptr = start;
  while(ptr!=NULL)
  {
    cout << ptr->info << "->";
    ptr = ptr->link;
  }
  cout<< "NULL" << endl;
}
void insertion_at_beginning(Node*& start,int val)
{
  Node *temp = new Node(val);// set info[new node] = val and link[new node] = NULL
  if(start==NULL)// IF list is Start is NULL
  {
    start = temp;
  }
  else // ELSE link[new node] = start and start = new node
  {
    temp->link = start;
    start=temp;
  }
}

int main()
{
  int n;
  cin >> n;

  Node *start = NULL;

  for(int i = 0;i<n;++i)
  {
    int val;
    cin >> val;
    insertion_at_beginning(start,val);
  }
  int value;
  cin >> value;
  insertion_at_beginning(start,value);//Add a node at beginning with value 'value'
  // Print the linked list
  print_List(start);
  return 0;
}