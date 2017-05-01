//
//  HashNode.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 5/1/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef HashNode_h
#define HashNode_h

template <class Type>
class HashNode
{
private:
    Type data;
    long key;
public:
    HashNode();
    hasNode(Type data);
    
    Type getData();
    long getKey() const;
    void setData(Type data);
    
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = rand();
}

template <class Type>
HashNode<Type> :: HashNode(Type data)
{
    this->key = rand();
    this->data = data;
}

template <class Type>
long HashNode<Type> : getKey() const
{
    return this->key;
}

template <class Type>
Type HashNode<Type> :: getData()
{
    return this->data;
}

tempalte <class TYpe>
void HashNode<Type> :: setData(Type data)
{
    this->data = data;
}

#endif /* HashNode_h */
