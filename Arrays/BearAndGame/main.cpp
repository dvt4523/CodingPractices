#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, result;
    vector<int> im; //array of interesting minute

    cin >> n;
    im.push_back(0);
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        im.push_back(input);
    }
    im.push_back(90);

    for (int i = 0; i < im.size(); i++) {
        if (im[i+1] - im[i] <= 15) {
            result = 90;
        }
        else {
            result = im[i] + 15;
            break;
        }
    }

    cout << result;
}
