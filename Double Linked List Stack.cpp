#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

#define MAXSIZE 5

Node* top; // pointer to the top element

//function prototype declaration
void push(int value);
int pop();
int topp();
bool isStackEmpty();
void display_stack();
int stackSize();
void stack_initialize();

// functions implementations are from here

void push(int value) {
    // your code here
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    newNode->prev = nullptr;

    if (top != nullptr) {
        top->prev = newNode;
    }

    top = newNode;
}

int pop() {
    // your code here
    if (isStackEmpty()) {
        cout << "\tUnderflow!!! Stack is Empty...";
        return NULL;
    }

    int x = top->data;
    Node* temp = top;
    top = top->next;

    if (top != nullptr) {
        top->prev = nullptr;
    }

    delete temp;

    return x;
}

bool isStackEmpty() {
    // your code here
    // return 1 if Stack is empty 0 otherwise
    return (top == nullptr);
}

int stackSize() {
    // your code here
    int size = 0;
    Node* current = top;

    while (current != nullptr) {
        size++;
        current = current->next;
    }

    return size;
}

void display_stack() {
    // your code here
    Node* current = top;

    while (current != nullptr) {
        cout << "\t\t" << current->data << endl;
        current = current->next;
    }
}

int topp() {
    // return top value here
    if (isStackEmpty()) {
        cout << "\tStack is Empty...";
        return NULL;
    }

    return top->data;
}

void stack_initialize() {
    top = nullptr;
}

int main() {
    int option, n, value;
    stack_initialize();
    cout << "C++ program to implement stack operations using double-linked list\n";
    do {
        cout << "\n\n 1.Push an element in stack";
        cout << "\n 2.Pop an element from stack";
        cout << "\n 3.Display stack";
        cout << "\n 4.Display current stack size ";
        cout << "\n 5.Display top element ";
        cout << "\n 6.Exit";
        cout << "\n Enter your choice: ";
        cin >> option;
        switch (option) {
        case 1:
            cout << "\n Insert an element in stack : ";
            cin >> n;
            push(n);
            break;
        case 2:
            value = pop();
            if (value != NULL)
                cout << "\n \tPopped element is: " << value << endl;
            break;
        case 3:
            display_stack();
            break;
        case 4:
            value = stackSize();
            cout << " \n\tCurrently number of elements in stack is " << value;
            break;
        case 5:
            value = topp();
            if (value != NULL)
                cout << "\n\tCurrent top element is " << value;
            break;
        case 6:
            return 0;
        }

    } while (option <= 6);

    return 0;
}
