#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int element);
int dequeue();
bool isQueueEmpty();
void display_queue();

void enqueue(int element)
{
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = nullptr;

    if (isQueueEmpty())
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()
{
    if (isQueueEmpty())
    {
        cout << "Queue is empty! Dequeue not possible" << endl;
        //return -1; // Return a sentinel value to indicate an error.
    }

    int dequeueElement = front->data;
    Node* temp = front;

    if (front == rear)
    {
        front = rear = nullptr;
    }
    else
    {
        front = front->next;
    }

    delete temp;
    return dequeueElement;
}

bool isQueueEmpty()
{
    return (front == nullptr && rear == nullptr);
}

void display_queue()
{
    if (isQueueEmpty())
    {
        cout << "Queue is empty! Nothing to show" << endl;
    }
    else
    {
        Node* current = front;
        while (current != nullptr)
        {
            cout << current->data << "\t";
            current = current->next;
        }
        cout << endl;
    }
}

int main()
{
    int option, n, value;
    cout << "C++ program to implement Queue operations using a linked list: " << endl;
    do
    {
        cout << "\n 1. Insert an element in Queue: ";
        cout << "\n 2. Delete an element from Queue: ";
        cout << "\n 3. Display Queue: ";
        cout << "\n 4. Exit ";
        cout << "\n Enter your Choice: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\n Enter an element to insert in the queue: ";
            cin >> n;
            enqueue(n);
            break;
        case 2:
            value = dequeue();
            if (value != -1)
                cout << "Dequeued Element is: " << value << endl;
            break;
        case 3:
            display_queue();
            break;
        case 4:
            return 0;
        }
    } while (option != 4);

    return 0;
}
