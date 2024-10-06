#include<iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node* prev;
};


class DoubleLinkedList {
private:
    Node* head;
public:

    DoubleLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr) {
            head->prev = newNode;
        }

        head = newNode;
    }


    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
        newNode->prev = current;
    }

    void displayList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }


    void displayReverse() {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};

int main() {

    DoubleLinkedList myList;

    // Inserting elements at the beginning
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(1);

    // Inserting elements at the end
    myList.insertAtEnd(4);
    myList.insertAtEnd(5);

    // Displaying the list
    cout << "List: ";
    myList.displayList();

    // Displaying the list in reverse order
    cout << "Reverse: ";
    myList.displayReverse();

    return 0;
}
