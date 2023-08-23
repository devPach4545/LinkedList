//
//  insert_node.cpp
//  linked_list
//
//  Created by Dev Pachchigar on 8/20/23.
//

#include<iostream>
#include "LinkedList.hpp"
using namespace std;

void InsertNodeFirst(struct Node*& p, int data, struct Node *& insert){
    //p is the head node before whom want my node insert, so at position 0
    insert = new Node;
    insert->data = data;
    insert->next = p;
    p = insert;
}

void InsertNodeAnywhere(struct Node*& headNode, struct Node *& jumpNode, int position){
   //create a node that you want to insert
    struct Node* insert = new Node();
    insert->data = 15;
    insert->next = NULL;
    
    
    //now let jumpnode point to head node
    jumpNode = headNode;//jumpnode points where headnode points
    
    //now loop untill you reach your desired position
    for(int i = 0; i < position - 1; i++){
        jumpNode = jumpNode->next;
    }
    //after jumpnode is at desired position, start the inserting procedure
    insert->next = jumpNode->next;
    jumpNode->next = insert;
}

void InsertNodeSorted(struct Node* head, struct Node*& p, struct Node*& q, int value){
    struct Node* insert = new Node();
    insert->data = value;
    insert->next = NULL;
    
    q  = NULL;
    p  = head;//p points where head points
    
    while(value > p->data){
        q = p;//q points where p points
        p = p->next;//p jumps to the next node
    }
    //now that your q is at the position that you wanted:-
    insert->next = q->next;
    q->next = insert;
    
}
   






    





