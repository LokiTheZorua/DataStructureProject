//
//  List.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/8/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef List_h
#define List_h

#include <assert.h>
#include "../../Notes/LinearNode.hpp"

template <class Type>

class List
{
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
    
protected:
    int size;
};


#endif /* List_h */
