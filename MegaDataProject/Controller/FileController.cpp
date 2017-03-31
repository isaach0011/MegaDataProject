//
//  FileController.cpp
//  MegaDataProject
//
//  Created by Hill, Isaac on 3/27/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include "FileController.hpp"

DoubleList<FoodItem> FileController :: readFoodItemDataFromFileAsList(string filename)
{
    DoubleList<FoodItem> dataSource;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            stringstream parseCSV(currentCSVLine);
            
            string title, tempCost, tempCalorie, tempTasty;
            
            double cost;
            int calories;
            bool isDelish;
            //Eacj [art as a string in order of the CSV = then convert afer using stod, stoi
            getline(parseCSV, title, ',');
            getline(parseCSV, tempCost, ',');
            getline(parseCSV, tempCalorie, ',');
            getline(parseCSV, tempTasty, ',');
            
            if(rowCount != 0)
            {
                cost = stod(tempCost);
                calories = stoi(tempCalorie);
                isDelish = stoi(tempTasty);
                
                FoodItem temp(title);
                temp.setCost(cost);
                temp.setCalories(calories);
                temp.setDelicious(isDelish);
                
                dataSource.add(temp);
            }
            rowCount++;
            
            cout << currentCSVLine << endl;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return dataSource;
}

void FileController :: writeFoodItemDataStatistics(DoubleList<FoodItem> dataSource, string filename)
{
    ofstream saveFile(filename);
    
    if(saveFile.is_open())
    {
        saveFile << "These are the contents of the list" << endl;
        for(int index = 0; index < dataSource.getSize(); index++)
        {
            saveFile << "Food Title: " << dataSource.getFromIndex(index).getFoodName() << endl;
        }
    }
    else
    {
        cerr << "FILE UNAVALIBLE" << endl;
    }
    saveFile.close();
}
