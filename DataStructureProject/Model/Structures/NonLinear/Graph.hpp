//
//  Graph.hpp
//  DataStructureProject
//
//  Created by Jones, Alec on 3/19/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#ifndef Graph_h
#define Graph_h
#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    // graph operations
    
    void addVertex(const Type& value);
    
    //Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    //Disconnnect vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    //Check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target)const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirestTraversal(Graph<Type> * graph, int vertex);
    int costTracersal(Graph<Type> & graph, int vertex);
};


template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
{
    int->vertexCount = 0;
}

template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}


//Left hand operator
template <classType>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}


//Right hand operator
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount< MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}


template <class Type>
void Graph<Type> :: removedEdge(int source, target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source,int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = false;
    weightCostMatrix[target][source] = 0;
}
template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertex && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
}

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[source][target] = cost;
}

template <class Type>
bool Graph<Type> :: hasUndirectedConnnection(int source, int target) const
{
    assert(source >= 0 && souce < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target] || adjacencyMatrix[target][source];
    
    return isAnEdge;
}

template <class Type>
bool Graph<Type> :: areConnected(int source, int target) const
{
    assert(source >= 0 && < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    
    return isAnEdge;
}

template <class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < vertexCount);
    std::set<int> vertexNeighbors;
    
    for(int index = 0; index < vertexCount; index++)
    {
        if(adjacencyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return vertexNeighbors;
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Grpah<Type> & currentGraph,int vertex)
{
    bool visitedVertices[MAXIMUM];
    assert(vertex < currentGraphs.size());
    std::fill_n(visitedVertices, currentGraph.size(),false);
    depthFirstTraversal(currentGraph, vertex, vistedVertices);
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    vistited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator + connections.begin(); setIterator != connections.end(); setIterator++)
    {
        if(!visited[*setIterator])
        {
            depthFirstTraversal(currentGraph, *setIterator, visited);
        }
    }
}

template <class Type>
int Graph<Type> :: costTracersal(Graph<Type> & currentGraph, int vertex)
{
    assert(start >= 0 && start < vertexCount);
    int cost = 0;
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::interator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited,currentGraph.size(),false);
    visited[vertex] = true;
    
    vertexQueue.push(vertex);
    visited[vertex] = true;
    
    vertexQueue.push(vertex);
    while (!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(verteQueue.front());
        vertex.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                cost += weightCostMatrix[vertex][*setIterator];
                vidiyrf[*setIterator] ture;
                vertexQueue.push(*setIterator);
            }
        }
    }
    
    return cost;
}

template <class Type>
void Graph<Type> :: breathFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    
    set::fill_n(visisted, currentGraph.size(),false);
    visited[vertex] = true;
    cout<< currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while (!vertexQueue.empty())
    {
        connections = currentGraph.begin(); setIterator != connections.end(); setIterator++)
        vertexQueue.pop();
        
        for(setIterator = connections.being(); setIterator != connections.end(0; setIterator++)
            {
                if(!visisted[*setIterator])
                {
                    visisted[*setIterator] = true;
                    cout << currentGraph[*setIterator] << endl;
                    vertexQueue.push(*setIterator);
                }
                
            }
    }
}
    

#endif /* Graph_h */
