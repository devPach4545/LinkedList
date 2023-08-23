#include "LinkedList.hpp"
#include <iostream>

void Create(struct Node*& head, std::vector<int> vec) {
    struct Node* temp, * last;
    head = new Node; // provide space on the heap
    head->data = vec[0];
    head->next = nullptr; // Use nullptr instead of NULL
    last = head; // last point where the head points

    for (int i = 1; i < vec.size(); i++) {
        temp = new Node;
        temp->data = vec[i];
        temp->next = nullptr; // Use nullptr instead of NULL
        last->next = temp; // this one links em
        last = temp; // need this to chain em
    }
}

void DisplayList(struct Node* t) {
    while (t != nullptr) { // Use nullptr instead of NULL
        std::cout << t->data << std::endl;
        t = t->next;
    }
}
