#include <iostream>

using namespace std;


int main() {
    
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int** graph = new int*[n];
    for (int i = 0; i < n; i++)
    {
        graph[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = INT_MAX;
        }
    }
    cout << "Enter the number of edges: ";
    int e;
    cin>>e;
    cout<<"Enter the edges: (Format: node1, node2, weight)"<<endl;
    for (int i = 0; i < e; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        graph[a][b] = c;
    }
    int* dist = new int[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;      
    }
    bool* visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    dist[0] = 0;
    visited[0] = true;
    int mn = INT_MAX;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (graph[0][i] != INT_MAX)
        {
            dist[i] = graph[0][i];
            mn = min(mn,dist[i]);
        }
    }
    while (count < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (graph[mn][i] != INT_MAX)
            {
                dist[i] = min(dist[i], dist[mn] + graph[mn][i]);
            }
        }
        visited[mn] = true;
        count++;
        mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false && dist[i] < mn)
            {
                mn = i;
            }
        }
    }
    
    cout<<"The shortest path from 0 to "<<n-1<<" is "<<dist[n-1]<<endl;

    return 0;
}

/*
Example Inputs from Grokking Algorithms

4
5
0 1 6
0 2 2
2 1 3
1 3 1
2 3 5
output should be 6

--------------------------------

6
8
0 1 5
0 2 0
1 3 15
1 4 20
2 3 30
2 4 35
3 5 20
4 5 10
output should be 35
*/

