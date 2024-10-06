#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node* next;
};

Node* top = nullptr; // Instead of front and rear, we have a top for a stack.

void push(int element);
int pop();
bool isStackEmpty();
void display_stack();

void push(int element)
{
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (isStackEmpty())
    {
        cout << "Stack is empty! Pop not possible" << endl;
        return -1; // Return a sentinel value to indicate an error.
    }

    int poppedElement = top->data;
    Node* temp = top;
    top = top->next;

    delete temp;
    return poppedElement;
}

bool isStackEmpty()
{
    return (top == nullptr);
}

void display_stack()
{
    if (isStackEmpty())
    {
        cout << "Stack is empty! Nothing to show" << endl;
    }
    else
    {
        Node* current = top;
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
    cout << "C++ program to implement Stack operations using a linked list: " << endl;
    do
    {
        cout << "\n 1. Push an element onto the Stack: ";
        cout << "\n 2. Pop an element from the Stack: ";
        cout << "\n 3. Display Stack: ";
        cout << "\n 4. Exit ";
        cout << "\n Enter your Choice: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\n Enter an element to push onto the stack: ";
            cin >> n;
            push(n);
            break;
        case 2:
            value = pop();
            if (value != -1)
                cout << "Popped Element is: " << value << endl;
            break;
        case 3:
            display_stack();
            break;
        case 4:
            return 0;
        }
    } while (option != 4);

    return 0;
}
