#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <vector>

struct Node {
    int data;
    struct Node* next;
};

void Create(struct Node*& head, std::vector<int> vec);
void DisplayList(struct Node* t);
void InsertNodeFirst(struct Node*& p, int data, struct Node *&insert);
void InsertNodeAnywhere(struct Node*& headNode, struct Node *& jumpNode, int position);
void InsertNodeSorted(struct Node* head, struct Node*& p, struct Node*& q, int value);
#endif
