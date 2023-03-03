#include <iostream>
#include <vector>
using namespace std;

bool checkButton(vector<int> v, int n) {
    if (n == 1)
        if (v[0] == 1)
            return true;
        else { return false; }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            count++;
    }

    if (count != 1)
        return false;
    else return true;
}

int main() {

    vector<int> v;
    int n, value;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    bool result = checkButton(v, n);

    if (result)
        cout << "YES";
    else
        cout << "NO";
}
