#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int* arr;
    int capacity;
    int front;
    int rear;

public:
    CircularQueue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[rear];
    }

    void printQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter Max Queue Size: ";
    cin >> n;

    CircularQueue q(n);
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
            q.printQueue();
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
