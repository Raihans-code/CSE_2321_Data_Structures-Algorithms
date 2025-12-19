#include <iostream>

using namespace std;

class Node
{
public:
  int info;
  Node *link;
  Node(int info)
  {
    this->info = info;
    this->link = NULL;
  }
};

void print_list(Node *ptr)
{
  while (ptr != NULL)
  {
    cout << ptr->info << "->";
    ptr = ptr->link;
  }
  cout << "NULL"<< endl;
}

void insert_at_nth(Node *start, int pos, int val)
{
  Node *newNode = new Node(val);

  if (pos == 0)
  {
    start = newNode;
    return;
  }

  Node *ptr = start;

  for (int i = 1; i <=pos; ++i)
  {
    ptr =  ptr->link;
  }
  if(ptr == NULL)
  {
    cout << "Position out of BOUNDs!"<<endl;
    delete newNode;
    newNode = NULL;
    return;
  }
  else{
    newNode->link = ptr->link;
    ptr->link = newNode;
  }

}

int main()
{
  int n;
  cout << "Enter Number Data:";
  cin >> n;

  Node *start = NULL;

  cout << "Enter Data:";
  for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        Node* temp = new Node(val);

        // INSERT AT TAIL
        if (start == nullptr)
        {
            start = temp;
        }
        else
        {
            Node* ptr = start;
            while (ptr->link != nullptr)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
  print_list(start);

  int item,position;
  cout << "Enter item:";
  cin >> item;
  cout << "Position";
  cin >> position;
  insert_at_nth(start,position-2,item);
  print_list(start);
}