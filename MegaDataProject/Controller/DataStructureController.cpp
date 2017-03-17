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
    
}

void DataStructureController :: testNodes()
{
    cout << "The contents of the node<String>" << endl;
    cout << wordNode.getNextPointer() << endl;
    cout << "Here is the node<int>" << endl;
    cout << numberNode.getNextPointer() << endl;
}
void DataStructureController :: start()
{
    testListTiming();
    testFoodQueue();
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

void DataStructureController :: testLists()
{
    List<string> sample;
    sample.addFront("am");
    sample.addEnd("cool");
    sample.addFront("I");
    cout << "This should go I, am, cool" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}

void DataStructureController :: testListTiming()
{
    DoubleList<int> timingList;
    Timer totalTimer;
    totalTimer.startTimer();
    for(int index = 0; index <10000; index++)
    {
        timingList.add(rand());
    }
    
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
    }
    
    averageSlow = averageSlow/1000.00;
    averageFast = averageFast/1000.00;
    totalTimer.stopTimer();
    
    cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds." << endl;
    cout << "The average speed for the getFromIndexFast method was: " << averageFast << " microseconds." << endl;
}

void DataStructureController :: testIntStack()
{
    Stack<int> numberStack;
    numberStack.add(2315);
    numberStack.push(32);
    int testValue = numberStack.pop();
    cout << "Test value is " << testValue << " and should be 32" << endl;
}

void DataStructureController :: testFoodQueue()
{
    Queue<FoodItem> tastyFood;
    FoodItem rice("rice");
    FoodItem cookies("cookies");
    FoodItem tacos("tacos");
    FoodItem duncanrice("duncanrice");
    FoodItem bread("bread");
    FoodItem fries("fries");
    FoodItem burger("burger");
    FoodItem burrito("burrito");
    FoodItem food("food");
    
    tastyFood.enqueue(rice);
    tastyFood.enqueue(bread);
    tastyFood.add(duncanrice);
    tastyFood.dequeue();
    tastyFood.enqueue(fries);
    tastyFood.add(cookies);
    
    fries.setCalories(999999);
    
    cout << "The size of the list is " << tastyFood.getSize() << "." << endl;
    cout << "The fries seem very unhealthy. Their calorie count is " << fries.getCalories() << "." << endl;
    
    tastyFood.remove(0);
    
    cout << "The size of the list is " << tastyFood.getSize() << "." << endl;
    
    tastyFood.enqueue(tacos);
    tastyFood.enqueue(burger);
    tastyFood.add(burrito);
    tastyFood.enqueue(food);

    FoodItem removed = tastyFood.dequeue();
    cout << "The item removed form the queue was " << removed.getFoodName() << " and should be duncanrice." << endl;
    cout << "The front of the list is " << tastyFood.peek().getFoodName() << ", it should be fries." << endl;
    cout << "The size of the list is " << tastyFood.getSize() << "." << endl;
}
