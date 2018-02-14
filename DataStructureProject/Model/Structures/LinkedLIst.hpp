//
//  LinkedLIst.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/14/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#include "List.hpp"
#include "LinearNode.hpp"

using namespace std;

#ifndef LinkedLIst_h
#define LinkedLIst_h

template <class type>

class LinkedLIst : public List<type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
    
public:
    LinkedLIst();
    
    virtual ~LinkedList();
    
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
}

LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->Size = 0;
}

LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyScructure = front;
    }
}

void LinkedLIst<Type> :: add(Type item)
{
    LinkedList<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this-> front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
}

void LinkedList<Type> :: addAt Index(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}


#endif /* LinkedLIst_h */
