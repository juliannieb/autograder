//
//  Node.cpp
//  BreadFirst
//
//  Created by Alberto Lopez on 21/09/16.
//  Copyright © 2016 Alberto Lopez. All rights reserved.
//

#include "Node.h"

Node::Node(){
    this->parent = nullptr;
}
Node::Node(string newName, Node *parent){
    this->parent = parent;
    this->data = newName;
}
