#include <iostream>
using namespace std;

class Queue
{
private:
    int* arr;
    int capacity;
    int frontIndex;
    int rearIndex;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        frontIndex = rearIndex = -1;
    }

    bool isEmpty()
    {
        return frontIndex == -1;
    }

    void enqueue(int value)
    {
        if (rearIndex == capacity - 1)
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (frontIndex == -1)
            frontIndex = 0;

        rearIndex++;
        arr[rearIndex] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        if (frontIndex == rearIndex)
        {
            frontIndex = rearIndex = -1;
        }
        else
        {
            frontIndex++;
        }
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    int rear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[rearIndex];
    }

    void print_Queue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        for (int i = frontIndex; i <= rearIndex; ++i)
            cout << arr[i] << " ";

        cout << endl;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter Max Queue Size: ";
    cin >> n;

    Queue q(n);
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
            cout << "Front: " << q.front() << endl;
            break;
        case 5:
            cout << "Rear: " << q.rear() << endl;
            break;
        case 6:
            q.print_Queue();
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
