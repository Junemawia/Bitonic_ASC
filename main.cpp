#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

long long comparisonCount = 0;
long long swapCount = 0;

void compAndSwap(vector<int>& arr, int i, int j, int dir) {
    comparisonCount++;
    if (dir == (arr[i] > arr[j])) {
        swap(arr[i], arr[j]);
        swapCount++;
    }
}
