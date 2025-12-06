#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int info;
  Node *link;
  Node(int info) {
    this->info = info;
    this->link = nullptr;
  }
};

void delete_nth_node(Node*& start, int position) {
    // Case 1: Empty list
    if (start == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    // Case 2: Invalid position (negative or 0)
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Case 3: Delete head node (position 1)
    if (position == 1) {
        Node* temp = start;
        start = start->link;
        delete temp;
        return;
    }

    // Case 4: Delete node at position > 1
    Node* current = start;
    Node* previous = nullptr;
    int count = 1;

    // Traverse to the node or until end of list
    while (current != nullptr && count < position) {
        previous = current;
        current = current->link;
        count++;
    }

    // Case 5: Position exceeds list length
    if (current == nullptr) {
        cout << "Position exceeds list length!" << endl;
        return;
    }

    // Delete the node
    previous->link = current->link;
    delete current;
}

int main() {
  int n;
  cin >> n;

  Node *start = NULL;

  for (int i = 1; i <= n; ++i) {
    int val;
    cin >> val;
    Node *newNode = new Node(val);
    if (start == NULL) {
      start = newNode;
    } else {
      newNode->link = start;
      start = newNode;
    }
  }
  Node *ptr = start;
  while (ptr != NULL) {
    cout << ptr->info << " ->";
    ptr = ptr->link;
  }
  cout << "NULL" << endl;

  int del_node_pos;
  cin >> del_node_pos;
  delete_nth_node(start,del_node_pos);

  ptr = start;
  while (ptr != NULL) {
    cout << ptr->info << " ->";
    ptr = ptr->link;
  }
  cout << "NULL" << endl;

  return 0;
}