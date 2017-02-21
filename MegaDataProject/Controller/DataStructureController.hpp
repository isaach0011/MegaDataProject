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
#include <string>

using namespace std;


class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    
public:
    DataStructureController();
    void start();
};

#endif /* DataStructureController_hpp */
