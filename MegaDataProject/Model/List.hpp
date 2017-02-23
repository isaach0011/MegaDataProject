//
//  List.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/21/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "Node.hpp"
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class List
{
private:
    int size;
    Node<Type> * front;
public:
    List();
    List<Type>(const List<Type> & source);
    ~List<Type>();
  
    void addAtIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    bool contains(Type data);
    int getSize() const;
    Node<Type> * getFront() const;
};


template <class Type>
List<Type> :: List()
{
    
}

template <class Type>
List<Type> :: List(const List<Type> & source)
{
    
}

template <class Type>
List<Type> :: ~List()
{
    
}

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->NodePointer(front);
        
        this->front = newFirst;
    }
    
    size++;
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
Type List<Type> :: remove(int index)
{
    
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    
}

template <class Type>
Type List<Type> ::getFromIndex(int index)
{
    
}

template <class Type>
bool List<Type> :: conatins(Type data)
{
    
}

template <class Type>
int List<Type> :: getSize() const
{
    
}

template <class Type>
Node<Type> * List<Type> :: getFront() const
{
    
}

#endif /* List_hpp */
