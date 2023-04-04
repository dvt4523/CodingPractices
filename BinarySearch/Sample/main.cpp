#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &a, int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left)/2;       // Type-safe for int instead of mid = (left + right) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            right = mid - 1;
        else if (x > a[mid])
            left = mid + 1;
    }
    return -1;
}

int recursiveBinarySearch(const vector<int> &a, int left, int right, int x) {
    if (left <= right) {
        int mid = left + (right - left)/2;       // Type-safe for int instead of mid = (left + right) / 2;
        if (x == a[mid]) {
            return mid;
        }

        else if (x < a[mid])
            recursiveBinarySearch(a, left, mid - 1, x);
        else if (x > a[mid])
            recursiveBinarySearch(a, mid + 1, right, x);
    }
    return -1;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
