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
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look code on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/ajon6781/Documents/Afternoon Swift/DataStructureProject/DataStructureProject/Data/crime.csv");
    
    for (int index = 200; index< 215; index++)
    {
        cout << index << " is " << myData[index] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
