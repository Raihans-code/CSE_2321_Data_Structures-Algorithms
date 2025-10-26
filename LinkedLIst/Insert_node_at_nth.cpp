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
void Insert_at_position(Node*& start,int val,int pos)
{
  Node *ptr = new Node(val);// set info[ptr] = val and link[ptr] = NULL
  if(pos==0)// IF position is 0
  {
    if(start==NULL)// IF list is Start is NULL
    {
      start = ptr;
    }
    else // ELSE link[ptr] = start and start = ptr
    {
      ptr->link = start;
      start=ptr;
    }
  }
  else // ELSE traverse to the (pos-1)th node
  {
    Node* ptr = start;
    for(int i=0;i<pos-1 && ptr!=NULL;i++)
    {
      ptr=ptr->link;
    }
    if(ptr==NULL)// IF (pos-1)th node is NULL
    {
      cout << "Position out of bounds" << endl;
      delete temp; // Free the allocated memory for the new node
      return;
    }
    // ELSE link[new node] = link[(pos-1)th node] and link[(pos-1)th node] = new node
    temp->link = ptr->link;
    ptr->link = temp;
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
  int value,position;
  cin >> value >> position;
  Insert_at_position(start,value,position-1);//Insert a node with value 'value' at position 'position'
  // Print the linked list
  Node* ptr = start;
  while(ptr!=NULL)
  {
    cout << ptr->info << "->";
    ptr = ptr->link;
  }
  cout<< "NULL" << endl;
  return 0;
}