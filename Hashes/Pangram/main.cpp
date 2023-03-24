#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> asciiSet;
    set<int> strSet;
    for (int i = 97; i < 123; i++) {
        asciiSet.insert(i);
    }
    int n;
    string str;
    cin >> n;
    getline(cin >> ws, str);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int ascii = tolower(str[i]);
        strSet.insert(ascii);
    }
    if (asciiSet == strSet) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
