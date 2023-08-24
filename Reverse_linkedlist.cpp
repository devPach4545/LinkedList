//
//  Reverse_linkedlist.cpp
//  linked_list
//
//  Created by Dev Pachchigar on 8/24/23.
//
#include<iostream>
#include "LinkedList.hpp"
using namespace std;


void ReverseLinkedList(struct Node*& p, struct Node*& head){
    p = head;
    
    Node *q = NULL;
    Node *r = NULL;
    
    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}
