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
        this->link = NULL;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Data: ";
    cin >> n;

    Node* start = nullptr;

    cout << "Enter Data:" << endl;

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

    // Display list
    Node* ptr = start;
    cout << "Linked List: ";
    while (ptr != nullptr)
    {
        cout << ptr->info << " -> ";
        ptr = ptr->link;
    }
    cout << "nullptr" << endl;

    return 0;
}
