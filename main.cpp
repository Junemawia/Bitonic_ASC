#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

long long comparisonCount = 0;
long long swapCount = 0;
void bitonicMerge(vector<int>& arr, int low, int cnt, int dir);

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
int main() {
    
int arr[] = {3, 7, 4, 8, 6, 2, 1, 5};
vector<int> data(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int originalSize = data.size();

    cout << "Sorting " << originalSize << " elements..." << endl;

    bitonicSort(data, 0, data.size(), 1);

    cout << "Sorted List: ";
    for (int i = 0; i < originalSize; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\n--- Performance Metrics ---" << endl;
    cout << "Total Comparisons: " << comparisonCount << endl;
    cout << "Total Swaps: " << swapCount << endl;

    return 0;
}
