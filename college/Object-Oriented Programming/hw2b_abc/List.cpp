#include "List.h"
using namespace std;

List::List() {
    size = 0;
    capacity = 1; // default 1
    dynamic_array = new float[capacity];
}

List::~List() {
    cout << "Deleting List successfully." << endl;
    delete[] dynamic_array;
}

void List::expand() {
    if (size == capacity) {
    	int pre_capacity = capacity;
        capacity *= 2;
        float *new_array = new float[capacity];
        for (int i = 0; i < size; i++) {
            new_array[i] = dynamic_array[i];
        }
        delete[] dynamic_array;
        dynamic_array = new_array;
        cout << "capacity: " << pre_capacity << " -> " << capacity << endl;
    }
}

void List::insert_at(int index, float value) {
    expand(); // check capacity before insert

    for (int i = size; i > index; i--) {
        // begin with i == size because when i = 0, size = 1 
        dynamic_array[i] = dynamic_array[i - 1];
    }
    dynamic_array[index] = value;
    size++;
}

float List::value_at(int index) const {
    return dynamic_array[index];
}

void List::remove_at(int index) {
    for (int i = index; i < size - 1; i++) {
        dynamic_array[i] = dynamic_array[i + 1];
    }
    size--;
}

int List::get_size() const {
    return size;
}

ostream &operator << (ostream &os, const List &ls) {
    for (int i = 0; i < ls.get_size(); i++) {
        os << ls.value_at(i);
        if (i < ls.get_size() - 1) {
            os << " -- ";
        }
    }
    return os;
}
