//
//  IntNodeArray.hpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 2/8/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value);
    int getFrameIndex(int index);
    int getSize();
};

#endif /* IntNodeArray_hpp */
