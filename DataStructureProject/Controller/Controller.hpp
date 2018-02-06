//
//  Controller.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 1/31/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"
#include "../Testers/ArrayTester.hpp"


class Controller
{
public:
    void start();
    void testArray();
    
private:
    void findMaxAndMin();
};
#endif /* Controller_hpp */
