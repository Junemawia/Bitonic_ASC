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
void bitonicSort(vector<int>& arr, int low, int cnt, int dir) {
    if (cnt > 1) {
        int k = cnt / 2;

        bitonicSort(arr, low, k, 1);

        bitonicSort(arr, low + k, k, 0);

        bitonicMerge(arr, low, cnt, dir);
    }
}
