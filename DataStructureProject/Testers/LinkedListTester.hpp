//
//  LinkedListTester.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/14/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include <iostream>
#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
};

#endif /* LinkedListTester_hpp */
