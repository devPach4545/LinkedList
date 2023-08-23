//
//  delete_node.cpp
//  linked_list
//
//  Created by Dev Pachchigar on 8/23/23.
//

#include <iostream>
#include "LinkedList.hpp"


void DeleteNode(struct Node*& headnode, struct Node*& p, struct Node*& q, int positon){
    if(positon == 1){
        p = headnode;
        headnode = p->next;
        p = NULL;
    }
    else{
        p = headnode;
        q = NULL;
        
        for(int i = 0; i < positon-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        p->next = NULL;
    }
}
