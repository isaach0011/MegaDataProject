//
//  DoublyLinkedList.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/1/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include "BiDirecitonalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    void setFront(BiDirectionalNode<Type> * font);
    void setSize(int updated);
    
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
int DoublyLinkedList<Type> :: getSize() const
{
    return size;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getFront() const
{
    return front;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getEnd() const
{
    return end;
}

#endif /* DoublyLinkedList_hpp */