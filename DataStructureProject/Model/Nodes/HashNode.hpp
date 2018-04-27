//
//  HashNode.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 4/27/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef HashNode_h
#define HashNode_h

#include "Node.hpp"

template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNOde(Type data);
    
    long getKey() const;
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = 0;
}

template <class TYpe>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}

#endif /* HashNode_h */
