#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node* link;

    Node(int info)
    {
        this->info = info;
        this->link = nullptr;
    }
};

Node* start = nullptr;

void Reverse()
{
    Node* current = start;
    Node* prev = nullptr;
    Node* temp = nullptr;

    while (current != nullptr)
    {
        temp = current->link;
        current->link = prev;
        prev = current;
        current = temp;
    }

    start = prev;   // ✅ FIXED
}

int main()
{
    int n;
    cout << "Enter Number of Data: ";
    cin >> n;

    cout << "Enter Data:" << endl;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        Node* temp = new Node(val);

        if (start == nullptr)
        {
            start = temp;
        }
        else
        {
            Node* ptr = start;
            while (ptr->link != nullptr)
                ptr = ptr->link;

            ptr->link = temp;
        }
    }

    // Print original list
    Node* ptr = start;
    cout << "Linked List: ";
    while (ptr != nullptr)
    {
        cout << ptr->info << " -> ";
        ptr = ptr->link;
    }
    cout << "nullptr" << endl;

    Reverse();

    // ✅ Reset ptr before printing again
    ptr = start;
    cout << "Reversed List: ";
    while (ptr != nullptr)
    {
        cout << ptr->info << " -> ";
        ptr = ptr->link;
    }
    cout << "nullptr" << endl;

    return 0;
}
