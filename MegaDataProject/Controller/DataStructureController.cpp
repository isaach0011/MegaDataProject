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
    testHash();
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
    sample.addAtIndex(1, "cool");
    sample.addFront("I");
    sample.addEnd("?");
    cout << "End should be ? and is: " << sample.getEnd()->getNodeData() << endl;
    cout << "Head should be I and is: " << sample.getFront()->getNodeData() << endl;
    
    sample.setAtIndex(3, "!");
    
    cout << "This should go I, am, cool, !" << endl;
    sample.addEnd("Hello World");
    sample.remove(4); //No Hello Worlds >:(
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 4 and is " << sample.getSize() << endl;
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
    numberStack.push(999999);
    cout << "The size is " << numberStack.getSize() << " it should be 2." << endl;
    cout << "Peek is " << numberStack.peek() << " and should be 999999." << endl;
    numberStack.remove(1);
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

void DataStructureController :: testDoubleList()
{
    DoubleList<int> coolList;
    DoubleList<int> coolFastList;
    Timer doubleTimer;
    doubleTimer.startTimer();
    coolList.add(1);
    coolList.getFromIndex(0);
    doubleTimer.stopTimer();
    cout << "The speed for getFromIndex was: "<< doubleTimer.getExecutionTimeInMicroseconds() << " microseconds." << endl;
    doubleTimer.resetTimer();
    
    doubleTimer.startTimer();
    coolList.add(1);
    coolList.getFromIndexFast(0);
    doubleTimer.stopTimer();
    cout << "The speed for getFromIndexFast was: "<< doubleTimer.getExecutionTimeInMicroseconds() << " microseconds." << endl;
    doubleTimer.resetTimer();
}

void DataStructureController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    cout << "Size should be 0 and is: " << numbers.getSize() << endl;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.preOrderTraversal();
    
    cout << "Size should be 4 and is: " << numbers.getSize() << endl;
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.postOrderTraversal();
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;

    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
}

void DataStructureController :: testBinarySearchData()

{
    
    FileController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    BinarySearchTree<CrimeData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/ihil17523/Documents/crime.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
    
    
}

void DataStructureController :: testGraph()
{
    Graph<string> connectedWords;
    
    connectedWords.addVertex("Money");
    connectedWords.addVertex("Power");
    connectedWords.addVertex("Pain");
    connectedWords.addVertex("Suffering");
    connectedWords.addVertex("Word Domination");
    connectedWords.addVertex("Hello World");
    connectedWords.addVertex("while(7)");
    
    connectedWords.addEdge(0,6);
    connectedWords.addEdge(1,5);
    connectedWords.addEdge(2,4);
    connectedWords.addEdge(3,3);
    connectedWords.addEdge(4,2);
    connectedWords.addEdge(5,1);
    connectedWords.addEdge(6,0);

    connectedWords.breadthFirstTraversal(connectedWords, 2);
    
    connectedWords.depthFirstTraversal(connectedWords, 0);
    
    
}

void DataStructureController :: testHash()
{
    HashTable<string> stringTable;
    
    stringTable.add("Yes");
    stringTable.add("No");
    stringTable.add("Maybe?");
    stringTable.add("Probably not");
    stringTable.add("Probably yes");
    stringTable.add("Ok");
    stringTable.add("Sure thing");
    stringTable.add("Alright");
    stringTable.add("I got it");
    stringTable.add("Fine");
    stringTable.add("while(7)");
    stringTable.add("Hello World");
    
    stringTable.displayContents();
}
