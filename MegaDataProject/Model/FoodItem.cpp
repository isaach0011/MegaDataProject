//
//  FoodItem.cpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/15/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem :: FoodItem()
{
    this->calories= 999;
    this->foodName = "yes";
    this->cost =12312.12;
    this->delicious = false;
}

FoodItem :: FoodItem(string name)
{
    this->foodName = name;
    this->cost = 4353.23;
    this->calories = 23;
    this->delicious = true;
    
}

int FoodItem :: getCalories()
{
    return calories;
}
double FoodItem :: getCost()
{
    return cost;
}
string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem :: setFoodName(string name)
{
    this->foodName = foodName;
}

void FoodItem :: setCalories(int calories)
{
    this->calories = calories;
}
void FoodItem :: setDelicious(bool delicious)
{
    this->delicious = delicious;
}

bool FoodItem :: operator < (FoodItem & otherFood)
{
    if(this->isDelicious()&& otherFood.isDelicious())
    {
        if(this->getCalories() < otherFood.getCalories())
        {
            return true;
        }
        return false;
    }
    return false;
}

bool FoodItem :: operator > (FoodItem & otherFood)
{
    return false;
}

bool FoodItem :: operator == (FoodItem & otherFood)
{
    return false;
}
