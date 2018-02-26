//
//  TestingStacksAndQueues.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/26/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp


#include <stdio.h>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/List.hpp"
#include <iostream>

using namespace std;

class TestingStacksAndNodes
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStacksAndQueues_hpp */