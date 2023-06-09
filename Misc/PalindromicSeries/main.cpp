#include <iostream>

using namespace std;

bool checkPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

string stringConstruct(string str, int len) {
    string result;
    int index;
    for (int i = 0; i < len; i++) {
        index = i;
        while (index >= str.length()) {
            index = index - str.length();
        }
        result.push_back(str[index]);
    }
    return result;
}

int main() {
    char ar[10] = {'a','b','c','d','e','f','g','h','i','j'};
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int len = 0;
        string input, str1, str2;
        cin >> input;

        for (char c : input) {
            str1.push_back(ar[c - '0']);
            len = len + (c - '0');
        }

        str2 = stringConstruct(str1, len);

        if (checkPalindrome(str2)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
