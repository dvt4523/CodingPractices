#include <iostream>
using namespace std;

int main() {
    int result = 0;
    int dist;
    int start = 'a';

    string str;
    getline(cin, str);

    for (char &c : str) {
        dist = abs(start - c);

        if (dist <= 13) {
            result += dist;
        } else {
            result = result + 26 - dist;
        }
        start = c;
    }

    cout << result;
}
