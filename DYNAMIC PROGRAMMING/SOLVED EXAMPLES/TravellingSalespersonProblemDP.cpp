// CPP program to implement traveling salesman

#include <bits/stdc++.h>
using namespace std;


// implementation of traveling Salesman Problem
int travllingSalesmanProblem(int graph[][50], int s, int n)
{
    // store all vertex apart from source vertex
    vector<int> vertex;
    for (int i = 0; i < n; i++)
        if (i != s)
            vertex.push_back(i);

    // store minimum weight Hamiltonian Cycle.
    int min_path = INT_MAX;
    do
    {

        // store current Path weight(cost)
        int current_pathweight = 0;

        // compute current path weight
        int k = s;
        for (int i = 0; i < vertex.size(); i++)
        {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];

        // update minimum
        min_path = min(min_path, current_pathweight);
    } while (
        next_permutation(vertex.begin(), vertex.end()));

    return min_path;
}

// Driver Code
int main()
{
    int n;
    cout << "Enter the number of cities" << endl;
    cin >> n;
    // matrix representation of graph
    int graph[50][50];
    cout << "Enter the weight of the graph" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }
    int s = 0;
    cout << "The minimum cost occured for travelling is :" << endl;
    cout << travllingSalesmanProblem(graph, s, n) << endl;
    return 0;
}