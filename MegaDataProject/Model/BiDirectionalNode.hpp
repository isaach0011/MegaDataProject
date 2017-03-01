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
    BiDirecitonalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}
#endif /* BiDirectionalNode_hpp */
