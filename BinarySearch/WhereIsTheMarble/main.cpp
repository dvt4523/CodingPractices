#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarySearch(const vector<int>& marbles, const int& x) {
    int left, right, mid;
    left = 0;
    right = marbles.size() - 1;
    while(left < right){
        mid = left + (right - left)/2;
        if (x == marbles[mid] && x > marbles[mid - 1])
        if (x < marbles[mid]) {

        }
    }
}

int main() {
    int N, Q;
    int caseNo = 1;

    while (N != 0 && Q != 0) {
        cin >> N >> Q;
        vector<int> marbles;
        for (int i = 0; i < N; i++){
            int value;
            cin >> value;
            marbles.push_back(value);
        }
        sort(marbles.begin(), marbles.end());


        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;

        }
    }
}
