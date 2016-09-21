//
//  Node.hpp
//  BreadFirst
//
//  Created by Alberto Lopez on 21/09/16.
//  Copyright © 2016 Alberto Lopez. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Node {
 
public:
    std::string data;
    Node(string newName, Node *parent);
    Node();
    Node *parent;
};

#endif /* Node_h */
