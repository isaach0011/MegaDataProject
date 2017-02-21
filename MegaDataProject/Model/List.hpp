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
    void add(Type value);
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
List<Type :: List(const List<Type> & source)
{
    
}

template <class Type>
List<Type :: ~List()
{
    
}


#endif /* List_hpp */
