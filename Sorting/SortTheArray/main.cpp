#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void reverse(vector<int> &v, int l, int r)
{
    reverse(v.begin() + l ,v.begin() + r);
}
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int>::iterator p;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

//    reverse(a.begin() + 0, a.begin() + 3);
    reverse(a, 0, 3);

    // Displaying elements of vector after Reversing
    for (p = a.begin(); p < a.end(); p++) {
        cout << *p << " ";
    }
}
