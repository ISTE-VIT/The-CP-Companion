#include <limits.h> 
#include <iostream> 
using namespace std ;
#define V 9 
int minDistance(int dist[], bool s[]) 
{ 
  
    int index,min = INT_MAX; 
    for (int v = 0; v < V; v++) 
        if (s[v] == false && dist[v] <= min) 
            min = dist[v], index = v; 
    return index;  
} 
  

int printSolution(int dist[], int n) 
{ 
    cout<<"Vertex   Distance from Source\n"; 
    for (int i = 0; i < V; i++) 
        cout<< i <<" "<< dist[i]<<"\n"; 
} 
  
void dijkstra(int graph[V][V], int source) 
{ 
    int dist[V];//distance 
  
    bool cover[V]; //include in path
    for (int i = 0; i < V; i++) 
        {dist[i] = INT_MAX ; cover[i] = false;} 
  
    
    dist[source] = 0; 
  
    // Find shortest path for all vertices 
    for (int count = 0; count < V - 1; count++) 
    { 
        
        int u = minDistance(dist, cover); 
  
       
        cover[u] = true; 
  
       
        for (int v = 0; v < V; v++) 
  
         
            if (!cover[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
  
    
    printSolution(dist, V); 
} 
  

int main() 
{ 
    
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0); 
  
    return 0; 
} 
