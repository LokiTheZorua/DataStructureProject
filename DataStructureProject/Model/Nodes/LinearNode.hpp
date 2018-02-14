//
//  LinearNode.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/8/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef LinearNode_h
#define LinearNode_h

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
    
public:
    LinearNode();
    LinearNode(Type data);
    LinearNOde(Type data, LinearNode<Type> * next);
    
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};


template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_h */
