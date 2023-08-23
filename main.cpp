#include <iostream>
#include <vector>
#include "LinkedList.hpp" // Include the header file

int main() {
    std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);
    vect.push_back(60);
    struct Node* head = NULL; // Declare the head pointer
    struct Node* i = NULL; // Declare the head pointer
    struct Node* j = NULL;
    Create(head, vect);// Call Create function with the head pointer
   // InsertNode(head, 5, i);
    
    //DisplayList(head);  // Display the linked list
    InsertNodeSorted(head, i, j,55);
    DisplayList(head);
    return 0;
}
