#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 100
const int INF = 1e9;
vector<vector<pair<int, int>>> graph;
vector<int> dist(MAX, INF);
int path[MAX];

struct comparator {
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
        return a.second > b.second;
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;

void Dijkstra(int s) {
    pq.pop();
    for (int i = 0; i < graph[s].size(); i++) {
        int currentAdjVertex = graph[s][i].first;
        int currentAdjWeight = graph[s][i].second;
        if (dist[s] + currentAdjWeight < dist[currentAdjVertex]) {
            dist[currentAdjVertex] = dist[s] + currentAdjWeight;
            path[currentAdjVertex] = s;
            pq.emplace(currentAdjVertex, dist[currentAdjVertex]);
        }
    }
}

int main() {
    dist[0] = 0;
    pq.emplace(0, 0);
    while (!pq.empty()) {
        Dijkstra(pq.top().first);
    }
}
