//
//  Node.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/13/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNextPointer(Node<Type> * pointer);
    Type getNodeData();
    Node<Type> * getNextPointer();
};

/*
 Implementation section
 */

template <class Type>
Node<Type> :: Node()
{
    //Explicitly DO NOT instantiate the nodeData data member
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data, Node<Type> * next)
{
    this->nodeData = data;
    this->nodePointer = next;
}

template <class Type>
void Node<Type> ::setNodeData(Type newValue)
{
    nodeData = newValue;
}

template <class Type>
void Node<Type> :: setNextPointer(Node<Type> * pointer)
{
    this->nodePointer = pointer;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNextPointer()
{
    return this->nodePointer;
}


#endif /* Node_h */
