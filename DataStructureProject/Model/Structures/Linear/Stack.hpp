//
//  Stack.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/22/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "LinkedList.hpp"

#endif /* Stack_h */

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    //Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    
    //empty
}

template <class Type>
Stack<Type> :: ~Stack()
{
    while<this->size > 0)
    {
        pop();
    }
}

template <class Type>
void Stack<Type> :: push(Type data)
{
    LinearNode<Type> * add = new LinearNode<Type>(data);
    
    if<this->size == 0)
    {
        this-> = add;
    }
    else
    {
        add->setNextNode(this->front);
    }
    
    this->front = add;
    this-> size++;
}

template <class Type>
void Stack<Type> :: add(Type data)
{
    push(data);
}

template <class Type>
void Stack<Type> :: addAtIndex(int index, Type data)
{
    assert(index == 0);
    push(data);
}

template <class Type>
Type Stack<Type> :: peek()
{
    assert(this->size > 0);
    return this->getFront()->getData();
}

template <class Type>
Type Stack<Type> :: getFromIndex(int index)
{
    assert(index ==0);
    return peek();
    
}

