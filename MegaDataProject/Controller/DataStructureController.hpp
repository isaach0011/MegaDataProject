//
//  DataStructureController.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/8/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp


#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include "../Model/List.hpp"
#include "../Model/Timer.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/BinarySearchTree.hpp"
#include "../Model/HashTable.hpp"
#include "../Model/Graph.hpp"
#include "FileController.hpp"
#include <string>

using namespace std;


class DataStructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    void testIntArray();
    void testNodes();
    void testAdvancedFeatures();
    void testLists();
    void testListTiming();
    void testFoodQueue();
    void testIntStack();
    void testDoubleList();
    void testBinarySearchTreeOperations();
    void testBinarySearchData();
    void testGraph();
public:
    DataStructureController();
    void start();
};

#endif /* DataStructureController_hpp */
