//
//  BiDirectionalNode.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/27/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef BiDirectionalNode_hpp
#define BiDirectionalNode_hpp

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>()
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next)
{
    this->nextPointer = next;
    this->previous = previous;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->nextPointer;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getPreviousPointer()
{
    return this->previous;
}

template <class Type>
void BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->nextPointer = next;
}

template <class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    
    this->previous = previous;
}
#endif /* BiDirectionalNode_hpp */
