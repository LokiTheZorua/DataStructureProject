//
//  Node.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 2/6/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>

class Node
{
protected:
    Type data;
    
public:
    Node();
    Nope(Type data);
    void setData(TypeD data);
    Type getData();
};

template <class Type>
{
    
    
}
template <class Type>
Node <Type> :: Node (Type data)
{
    this-> data = data;
}

tempalte <class Type>
Type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_h */
