//
//  Controller.cpp
//  DataStructureProject
//
//  Created by Jones, Alec on 1/31/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller:: start()
{
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "Look code on the screen" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/ajon6781/Documents/Afternoon Swift/DataStructureProject/DataStructureProject/Data/crime.csv");
//
//    for (int index = 200; index< 215; index++)
//    {
//        cout << index << " is " << myData[index] << endl;
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
//    findMaxAndMin();
//
//    testArray();
}

void Controller :: findMaxAndMin()
{
    
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/ajon6781/Documents/Afternoon Swift/DataStructureProject/DataStructureProject/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        else if(myData [minIndex] == myData[index])
        {
            int tieNumber = 0;
            tieNumber++;
        }
        else if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
        
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest crime is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

void Controller :: testArray()
{
    Array<int> exampleArray(20);
    
    cout << exampleArray.getSize() << endl;
}









