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


class Controller
{
public:
    void start();
    
private:
    void findMaxAndMin();
};
#endif /* Controller_hpp */
