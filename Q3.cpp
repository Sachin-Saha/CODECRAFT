#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void DFS(int node, unordered_map<int, vector<int>>& adjList, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adjList, visited);
        }
    }
}

int main() {
    unordered_map<int, vector<int>> adjList;
    
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1, 5};
    adjList[5] = {4};

    vector<bool> visited(6, false);

    cout << "DFS traversal starting from node 0:\n";
    DFS(0, adjList, visited);

    return 0;
}
