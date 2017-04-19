//
//  FileController.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/27/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/BinarySearchTree.hpp"
#include "../Model/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
public:
    DoubleList<FoodItem> readFoodItemDataFromFileAsList(string filename);
    void writeFoodItemDataStatistics(DoubleList<FoodItem> source, string filename);
    BinarySearchTree<CrimeData> readCrimeDataToBinarySearchTree(string filename);
};

#endif /* FileController_hpp */
