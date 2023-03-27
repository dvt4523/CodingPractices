#include <iostream>
#include <vector>
using namespace std;

int k, n, w;

int main() {
    cin >> k >> n >> w;

    int cost = 0;
    for (int i = 0; i < w; i++) {
        cost += (i+1)*k;
    }

    if (cost < n) {
        cout << 0;
    } else {
        cout << cost - n;
    }
}
