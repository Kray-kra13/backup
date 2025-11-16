#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at a given position
void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    // Insertion at the beginning
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node at a given position
void deleteAtPosition(Node*& head, int position) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // Deleting the first node
    if (position == 1) {
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = NULL;
    int choice, data, position;

    while (true) {
        cout << "\n--- Linked List Operations ---\n";
        cout << "1. Insert at position\n";
        cout << "2. Delete at position\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert (1-based): ";
                cin >> position;
                insertAtPosition(head, data, position);
                break;

            case 2:
                cout << "Enter position to delete (1-based): ";
                cin >> position;
                deleteAtPosition(head, position);
                break;

            case 3:
                printList(head);
                break;

            case 4:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}
