//
//  DataStructureController.cpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/8/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;

DataStructureController :: DataStructureController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void DataStructureController :: testNodes()
{
    cout << "The contents of the node<String>" << endl;
    cout << wordNode.getNodePointer() << endl;
    cout << "Here is the node<int>" << endl;
    cout << numberNode.getNodePointer() << endl;
}
void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    testNodes();
    cout << "Swtiching to the array testing" << endl;
    testIntArray();
    cout << "Switching to advanced feature testing" << endl;
    testAdvancedFeatures();
    cout << "Finish testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for (int index = 0; index < 3 ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for (int index = 0; index < temp.getSize() ; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}

void DataStructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
}