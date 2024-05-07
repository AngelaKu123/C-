#ifndef LIST_H_
#define LIST_H_
#include <iostream>

class List {
private:
    float *dynamic_array;
    int size; // the number of elements in the array
    int capacity; // the capacity of the array
    
    // used to expand the array when size==capacity
    // To double in size in expansion
    void expand();

public:
    List(); // constructor
    ~List(); // destructor
    // inserts at index.
    // E.g., insert_at(2, 4.2) into [9.5, 3.0, 0.6, 12.5]
    // would produce [9.5, 3.0, 4.2, 0.6, 12.5]
    void insert_at(int index, float value);
    float value_at(int index) const;
    void remove_at(int index);
    int get_size() const;
    friend std::ostream &operator << (std::ostream &os, const List &ls);
}; 
#endif