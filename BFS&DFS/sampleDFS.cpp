#include <iostream>
#include <vector>

using namespace std;
#define MAX 100

int V;
int E;
vector<int> graph[MAX];
bool visited[MAX];
int path[MAX];

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

/**
 * Print the result path
 * @param s start vertex
 * @param f finish vertex
 */
void printPath(int s, int f) {
    int b[MAX];
    int m = 0;
    if ( f == s ) {
        cout << s;
        return;
    }

    if (path[f] == -1) {
        cout << "No path" << endl;
        return;
    }

    while (true) {
        b[m++] = f;
        f = path[f];
        if (f == s) {
            b[m++] = s;
            break;
        }

        for (int i = m-1; i >= 0 ; i--)
            cout << b[i] << " ";
    }
}

int main() {
    int u, v; // u & v: list of edges
    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int s = 0;
    int f = 5;

    for (int i = 0; i < V; i++) {
        visited[i] = false;
        path[i] = -1;
    }

    DFSRecursion(s);
    printPath(s, f);
}
