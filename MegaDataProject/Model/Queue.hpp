//
//  Queue.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/1/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

template <class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
    
public:
    Queue();
    ~Queue();
    void add(Type data);
    Type remove(int index);
    void enqueue(Type data);
    Type dequeue();
    Type peek();
};

template <class Type>
void Queue<Type> :; add(Type value)
{
    enqueue(value);
}

/*
 Add to Queue:
 Create Node
 If First - adjust front
 else add to end
 move end
 adjust size
*/

template <class Type>
void Queue<Type> :: enqueue(Type insertedValue)
{
    BiDirectionalNode<Type> * added = new BiDirectionalNode<Type>(insertedValue);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(added);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1);
}

/*
 Remove from Queue
 Check valid index
 call dequeue
*/

template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    return dequeue();
}

/*
 Check size
 if size == 1
    adjust end to null
 else
    move front to next
 delete node
 adjust size
 return value
 
*/

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->getSize > 0);
    Type removedValue = this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this->getFront();
    if(this->getSize() == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer());
    }

    delete removeMe;
    this->setSize(this->getSize() - 1);
    
    return removedValue();
}

#endif /* Queue_hpp */
