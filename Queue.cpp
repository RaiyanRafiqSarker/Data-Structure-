#include <iostream>
using namespace std;
#define MAXSIZE 5

int q[MAXSIZE];
int front = -1;
int rear = -1;

void enqueue(int element);
int dequeue();
bool isQueueEmpty();
int queueSize();
bool isQueueFull();
void display_queue();

void enqueue(int element)
{
    if (isQueueFull())
    {
        cout << "\t Queue is Full" << endl;
    }
    else if (isQueueEmpty())
    {
        front = rear = 0;
        q[rear] = element;
    }
    else
    {
        rear = (rear + 1) % MAXSIZE;
        q[rear] = element;
    }
}

int dequeue()
{
    if (isQueueEmpty())
    {
        cout << "Queue is empty! Dequeue not possible" << endl;
        return -1; // Return a sentinel value to indicate an error.
    }

    int dequeueElement = q[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAXSIZE;
    }

    return dequeueElement;
}

bool isQueueEmpty()
{
    return (front == -1 && rear == -1);
}

bool isQueueFull()
{
    return ((rear + 1) % MAXSIZE) == front;
}

void display_queue()
{
    if (isQueueEmpty())
    {
        cout << "Queue is empty! Nothing to show" << endl;
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << q[i] << "\t";
            }
        }
        else
        {
            for (int i = front; i < MAXSIZE; i++)
            {
                cout << q[i] << "\t";
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << q[i] << "\t";
            }
        }
        cout << endl;
    }
}

int main()
{
    int option, n, value;
    cout << "C++ program to implement Queue operations: " << endl;
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
