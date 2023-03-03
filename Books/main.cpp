#include <iostream>
#include <vector>
using namespace std;

/**
 * Two-pointer solution
 *
 * @param n amount of books available
 * @param t available time
 * @param books book vector
 * @return amount of book being able to read in allotted time
 */
int findMaxBooks(int n, int t, vector<int> books) {
    int left = 0;
    int readTime = 0;
    int count = 0;
    for (int right = 0; right < n; right++) {
        count++;
        readTime += books[right];
        if (readTime > t) {
            readTime -= books[left];
            left++;
            count--;
        }
    }
    return count;
}

int main() {
    int n, t;
    vector<int> books;

    cin >> n;
    cin >> t;

    int value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        books.push_back(value);
    }

    cout << findMaxBooks(n, t, books);
}

