<h2> A* Algorithm</h2>

A* in Python is a powerful and beneficial algorithm with all the potential. However, it is only as good as its heuristic function, which is highly variable considering a problem’s nature. It has found its applications in software systems in machine learning and search optimization to game development.
<h2>Basic concepts of A*</h2>
f(n)=g(n)+h(n)
Where

g  (n) : The actual cost path from the start node to the current node. 

h ( n) : The actual cost path from the current node to goal node.

f  (n) : The actual cost path from the start node to the goal node.

For the implementation of A* algorithm we have to use two arrays namely OPEN and CLOSE.
<h2>Algorithm</h2>
1: Firstly, Place the starting node into OPEN and find its f (n) value.

2: Then remove the node from OPEN, having the smallest f (n) value. If it is a goal node, then stop and return to success.

3: Else remove the node from OPEN, and find all its successors.

4: Find the f (n) value of all the successors, place them into OPEN, and place the removed node into CLOSE.

5: Goto Step-2.

6: Exit.
**EXPLAINATION:**
<h3>Pseudo-code of A* algorithm</h3>
let openList equal empty list of nodes
let closedList equal empty list of nodes
put startNode on the openList (leave it's f at zero)
while openList is not empty
    let currentNode equal the node with the least f value
    remove currentNode from the openList
    add currentNode to the closedList
    if currentNode is the goal
        You've found the exit!
    let children of the currentNode equal the adjacent nodes
    for each child in the children
        if child is in the closedList
            continue to beginning of for loop
        child.g = currentNode.g + distance b/w child and current
        child.h = distance from child to end
        child.f = child.g + child.h
        if child.position is in the openList's nodes positions
            if child.g is higher than the openList node's g
                continue to beginning of for loop
        add the child to the openList


> **INPUT:** adjac_lis = {
    'A': [('B', 1), ('C', 3), ('D', 7)],
    'B': [('D', 5)],
    'C': [('D', 12)]
}
graph1 = Graph(adjac_lis)
graph1.a_star_algorithm('A', 'D')

> **OUTPUT :** Path found: ['A', 'B', 'D']
                    ['A', 'B', 'D']

> **EXPLAINATION** :
In this code, we have made the class named Graph, where multiple functions perform different operations. There is written with all the functions what all operations that function is performing. Then some conditional statements will perform the required operations to get the minimum path for traversal from one node to another node. Finally, we will get the output as the shortest path to travel from one node to another.
> 
