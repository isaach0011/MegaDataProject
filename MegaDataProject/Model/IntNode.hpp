//
//  IntNode.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/6/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
public:
    //Constructor
    IntNode();
    IntNode(int value);
    /*
     Creates an IntNode with a specified value and next node pointer.
     */
    IntNode(int value, IntNode * nextNode);
    
    //Methods
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode * next);
};

#endif /* IntNode_hpp */
