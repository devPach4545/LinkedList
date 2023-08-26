//
//  Merge_lists.cpp
//  linked_list
//
//  Created by Dev Pachchigar on 8/25/23.
//

#include<iostream>
#include "LinkedList.hpp"
using namespace std;

void MergeLists(Node*& first, Node*& second, Node*& third){
    third = NULL;
    Node* last = NULL;
    if(first->data < second->data){
        third = first;
        last = first;
        first = first->next;
    }
    else{
        third = second;
        last = second;
        second = second->next;
    }
    while(first != NULL && last != NULL){
        if(first->data < second->data){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else{
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if(first != NULL){
        last->next = first;
    }
    else{
        last->next = second;
    }
    
}
