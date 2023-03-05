#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int subjectCount, initialTime;

    cin >> subjectCount >> initialTime;

    vector<int> chapterCount(subjectCount);

    for (int i = 0; i < subjectCount; i++) {
        cin >> chapterCount[i];
    }

    sort(chapterCount.begin(), chapterCount.end());

    long long result = 0;
    int readTime = initialTime;

    for (int i = 0; i < subjectCount; i++) {
        if (i != 0 && readTime > 1) {
            readTime--;
        }
        result += 1ll * readTime * chapterCount[i]; //Cast to long for
    }

    cout << result;
}
