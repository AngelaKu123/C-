#include "LnList.h"
using namespace std;

LnList::LnList(): head(nullptr) {} // constructor
    
LnList::~LnList() { // destructor
    Node *current = head;
    while (current != nullptr) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
    cout << "Delete LnList successfully." << endl;
}

void LnList::insert(int value) {
    Node *new_node = new Node(value);
    if (head == nullptr) {
        head = new_node;
    }
    else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// returns true if successfully removed, false otherwise
bool LnList::find(int value) const {
    Node *current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

bool LnList::remove(int value) {
    Node *current = head;
    Node *prev;
    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) { // not found
        return false;
    }
    else { // current->data == value
        prev->next = current->next;
        delete current;
        cout << "Remove Data successfully." << endl;
        return true;
    }
}
