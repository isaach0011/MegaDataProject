//
//  BinarySearchTree.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 4/11/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include "BinarySearchTreeNode.hpp"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreNode<Type> * root);
    int calculateHeight(BinarySearchTreeNode<Type> * root);
    bool isBalanced(BinarySearchTreeNode<Type> * root);
    bool isComplete(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
private:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBlanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    delete root;
}
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
void binarySearchTree<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(root);
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(root);
}

template <class Type>
void BinarySearchTree<Type> :: isComplete(BinarySearchTreNode<Type> * start, int index, int size)
{
    if(start == nullptr)
    {
        return true;
    }
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinarySearchTreeNode<Type> * start)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(start == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(start->getLeftChild());
    rightHeight = calculateHeight(start->getRightChild());
    
    int heightDifference = abs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(start->getLeftChild());
    bool rightBalanced = isBalanced(start->getRightChild());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinarySearchTreeNode<Type> * start)
{
    if(start == nullptr)
    {
        return 0;
    }
    else
    {
        return 1 + max(calculateHeight(start->getLeftChild()), calculateHeight(start->getRightChild()));
    }
}
template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    int count = 1;
    if(start == nullptr)
    {
        return 0;
    }
    else
    {
        count += calculateSize(start->getLeftChild());
        count += calculateSize(start->getRightChild());
        return count;
    }
}

template<class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        cout << "Node Contents: " << inStart->getNodeData() << endl;
        inOrderTraversal(inStart->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    if(inStart != nullptr)
    {
        cout << "Node Contents: " << inStart->getNodeData() << endl;
        inOrderTraversal(inStart->getLeftChild());        
        inOrderTraversal(inStart->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        inOrderTraversal(inStart->getRightChild());
        cout << "Node Contents: " << inStart->getNodeData() << endl;
    }
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinarySearchTreeNode<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if(itemToFind < current->getNodeData())
                
            {
                current = current ->getLeftChild)();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        return false;
    }
}
template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = new BinarySearchTreeNode<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * previous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getNodeData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exists already - Exiting" << endl;
                delete insertMe;
                return;
            }
        }
        
        if(previous->getNodeDtaa() > itemToInser)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootPointer(previous);
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)

{
    if(root == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current>getNodeData() == getRideOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                preivous = current;
                if(getRidOfMe < current->getNodeData())
                {
                    current = current->getLeftChild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
        }
    }
    
    if(current == nullptr)
    {
        cerr << "Item not found, removal unsuccessful" << endl;
    }
    else if(hasBeenFound)
    {
        if(currenet == root)
        {
            removeNode(root);
        }
        else if (getRideOfMe < preivous->getNodeData())
        {
            removeNode(previous->getLeftChild());
        }
        else
        {
            removeNode(previous->getRightChild());
        }
    }
}

template <class Type>
void BinarySearcdhTree<Type> :: removeNode(BinarySearchTreeNode<Type> * removeMe)
{
    BinarySearchTreeNode<Type> * current;
    BinarySearchTreeNode<Type> * previous;
    BinarySearchTreeNode<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    if(removeMe->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(preivous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        delete temp;
    }
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        temoveMe = removeMe->getLeftChild();
        
        if(preivous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        temoveMe = removeMe->getRightChild();
        
        if(preivous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    else
    {
        current = removeMe->getLeftChild();
        previous = nullptr;
        
        while(current->getRightChild() != nullptr)
        {
            previous = current;
            current = current->getRightChild();
        }
        
        removeMe->setNodeData(current->getNodeData());
        
        if(previous == nullptr)
        {
            removeMe->setLeftChild(current->getLeftChild());
            if(current->getLeftChild() != nullptr)
            {
                current->getLeftChild()->setRootPoitner(removeMe);
            }

        }
        else
        {
            previous->setRightChild(current->getLeftChild());
            if(current->getLeftcHIld() != nullptr)
            {
                current->getLeftChild()->setRootPointer(previous);
            }
        }
        
        delete current;
    }
    if(removeMe ==  nullptr || removeMe->getRootPointer == nullptr)
    {
        setRoot(removeMe);
    }
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return calculateSize(root);
}

tempalte <class Type>
int BinarySearchTree<Type> :; getHeight()
{
    return calculateHeight(root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(root);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return isComplete(root);
}
#endif /* BinarySearchTree_h */
