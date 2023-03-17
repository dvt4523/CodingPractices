#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 1001

int V, Q;
vector<int> graph[MAX];
bool visited[MAX];
int path[MAX];
int pathCount;
int result;

void DFSRecursion (int s) {
    visited[s]  = true;
    for (int i = 0; i < graph[s].size(); i++ ) {
        int v = graph[s][i];
        if (!visited[v]) {
            path[v] = s;
            DFSRecursion(v);
        }
    }
}

int countPathRecursion(int s, int f) {
    if (s == f) {
        return 0;
    }
    else {
        if (path[f] == -1)
            return pathCount;
        else {
            pathCount++;
            countPathRecursion(s, path[f]);
        }
    }
    return pathCount;
}

int main() {
    int u, v; // u & v: list of edges
    cin >> V;
    for (int i = 0; i < V-1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < V; i++) {
        visited[i] = false;
        path[i] = -1;
    }

    DFSRecursion(1);

    cin >> Q;
    vector<int> girls;
    for (int i = 0; i < Q; i++) {
        int id;
        cin >> id;
        girls.push_back(id);
    }

    sort(girls.begin(), girls.end());

    int currentPathCount = MAX;
    int recursionPathCount;
    for (int i = 0; i < Q; i++) {
        pathCount = 0;
        recursionPathCount = countPathRecursion(1, girls[i]);
        if (recursionPathCount < currentPathCount) {
            currentPathCount = recursionPathCount;
            result = girls[i];
        }
    }

    cout << result;
}
