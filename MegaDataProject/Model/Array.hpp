//
//  Array.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/16/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include "Node.hpp"
#include <assert.h>

template  <class Type>
class Array
{
private:
    int size
    Node<Type> * front;
public:
    Array();
    Array(int size);
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
};

/*
 Implementation
 */

template <class Type>
Array<Type> :: Array()
{
    //Never used and Default constructor only supplied to avoid compilation error!
    
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > size);
    
    this-> size = size;
    this->Front = new Node<Type>();
    
    for (int index = 1; index < size; index++)
    {
        Node<Type>() * current = new Node<Type>();
        current-> setNodePointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type>* current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNodePointer();
    }
    current->setNodedata(value);
}

template <class type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index > 0 && index < size);
    
    Type value;
    
    Node<Type> * current = frontl
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    
    return value
}

template <class type>
int Array<Type> :: getSize()
{
    return size;
}
#endif /* Array_hpp */
