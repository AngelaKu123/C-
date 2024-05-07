#ifndef LNLIST_H_
#define LNLIST_H_
#include <iostream>

class LnList {
private:
    struct Node{
        int data;
        Node *next;

        Node():data(0),next(nullptr){}
        Node(int _data):data(_data),next(nullptr){}
    };
    Node *head;

public:
    LnList(); // constructor
    ~LnList(); // destructor
    void insert(int value);
    bool find(int value) const;
    bool remove(int value); // returns true if successfully removed
    // false otherwise
};

#endif