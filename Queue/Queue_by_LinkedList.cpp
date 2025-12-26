#include <algorithm>
#include <iostream>
using namespace std;

class Node
{
public:
    int item;
    Node* link;

    Node(int item)
    {
        this->item = item;
        this->link = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor
    Queue() {
        front = rear = nullptr;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->link = newNode;
            rear = newNode;
        }
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->link;
        delete temp;

        // If queue becomes empty
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Get front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return front->item;
    }
    // Get Rear element
    int getRear()
    {
        if(isEmpty())
        {
            cout << "Queue is empty.\n";
            return -1;
        }
        return rear->item;
    }
     void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->item << "->";
            temp = temp->link;
        }
        cout << "NULl";
    }
};

int main()
{
    Queue q;
    int op;

    do
    {
        cout << "\n1. Insert\n2. Delete\n3. Is Empty\n4. Front\n5. Rear\n6. Print\n7. Exit\n";
        cout << "Select Operation: ";
        cin >> op;

        switch (op)
        {
        case 1:
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            q.enqueue(val);
            break;
        }
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << (q.isEmpty() ? "Queue is empty\n" : "Queue is not empty\n");
            break;
        case 4:
            cout << "Front: " << q.getFront() << endl;
            break;
        case 5:
            cout << "Rear: " << q.getRear() << endl;
            break;
        case 6:
            q.display();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (op != 7);


    return 0;
}