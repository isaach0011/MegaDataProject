//
//  Node.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/13/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
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
    void setNodePointer(Node<Pointer> * pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};

#endif /* Node_h */
