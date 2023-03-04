#include <iostream>
#include <vector>
using namespace std;

vector<int> readIntoVector(int count) {
    vector<int> result;
    int value;
    for (int i = 0; i < count; i++) {
        cin >> value;
        result.push_back(value);
    }
    return result;
}

/**
 * Two-pointer solution. Loop through prepared list and find matching pair. Once found,
 * move to next element in required to find. Since 2 arrays are sorted, no need to rescan.
 */
int findNeeded(int n, int m, vector<int> required, vector<int> prepared) {
    int result = n;
    for (int i = 0, j = 0; i < n && j < m; j++) {
        if (required[i] <= prepared[j]) {
            result--;
            i++;
        }
    }
    return result;
}
int main() {

    int n, m;
    cin >> n;
    cin >> m;
    vector<int> required = readIntoVector(n);
    vector<int> prepared = readIntoVector(m);
    int needed = findNeeded(n, m, required, prepared);

    cout << needed;
}
