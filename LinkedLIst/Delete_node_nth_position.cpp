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
void Delete_at_position(Node*& start,int pos)
{
  if(start==NULL)// IF list is Start is NULL
  {
    cout << "List is empty" << endl;
    return;
  }
  if(pos==0)// IF position is 0
  {
    Node* temp = start;
    start = start->link;
    delete temp; // Free the memory of the deleted node
  }
  else // ELSE traverse to the (pos-1)th node
  {
    Node* ptr = start;
    for(int i=0;i<pos&& ptr!=NULL;i++)
    {
      ptr=ptr->link;
    }
    if(ptr==NULL)// IF (pos-1)th node is NULL or posth node is NULL
    {
      cout << "Position out of bounds" << endl;
      return;
    }
    // ELSE link[(pos-1)th node] = link[posth node] and delete posth node
    Node* temp = ptr->link;
    ptr->link = temp->link;
    delete temp; // Free the memory of the deleted node
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
      Node* ptr = start;
      while(ptr->link!=NULL)
      {
        ptr=ptr->link;
      }
      ptr->link = temp;
    }
  }

  print_List(start);

  cout << "Enter position to delete: ";
  int position;
  cin >> position;
  Delete_at_position(start,position-1);
  print_List(start);

  return 0;
}