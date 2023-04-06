#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarySearch(const vector<int>& marbles, const int& x) {
    int left, right, mid;
    left = 0;
    right = marbles.size() - 1;
    bool isFound = false;
    while(left <= right) {
        mid = left + (right - left)/2;
        if (x == marbles[mid] && (x > marbles[mid - 1] || mid == left)) {
            isFound = true;
            cout << x << " found at " << mid + 1 << endl;
            break;
        }

        else if (x < marbles[mid]) {
            right = mid - 1;
        }
        else if (x > marbles[mid]) {
            left = mid + 1;
        }
    }
    if (!isFound)
        cout << x << " not found" << endl;
}

int main() {
    int N, Q;
    int caseNo = 0;

    while (true) {
        cin >> N >> Q;
        if (N == 0 & Q == 0)
            break ;
        vector<int> marbles;
        for (int i = 0; i < N; i++){
            int value;
            cin >> value;
            marbles.push_back(value);
        }
        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << caseNo + 1 << ":" << endl;
        caseNo++;

        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;
            binarySearch(marbles, query);
        }
    }
}
