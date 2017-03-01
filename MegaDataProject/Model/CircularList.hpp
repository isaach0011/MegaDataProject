//
//  CircularList.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/1/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    //No need to redefine the private data members!!!
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    
    //Other methods as needed
    
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList();
{
    //deal with circle list stuff only here
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    
}

#endif /* CircularList_hpp */
