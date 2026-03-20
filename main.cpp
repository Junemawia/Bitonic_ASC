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

void bitonicMerge(vector<int>& arr, int low, int cnt, int dir){
if (cnt > 1) {
        int k = cnt / 2;
        for (int i = low; i < low + k; i++) {
            compAndSwap(arr, i, i + k, dir);
        }
        bitonicMerge(arr, low, k, dir);
        bitonicMerge(arr, low + k, k, dir);
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
    
    long testSizes[] = {1, 2, 3, 4, 5, 10, 250, 999, 9999, 89786, 789300, 1780000};
    int numTests = sizeof(testSizes) / sizeof(testSizes[0]);

    for (int i = 0; i < numTests; i++) {
        long n_orig = testSizes[i];
        
        comparisonCount = 0;
        swapCount = 0;

        vector<int> data;
        for (long j = 0; j < n_orig; j++) {
            data.push_back(rand() % 10000); 
        }

        long n_padded = 1;
        while (n_padded < n_orig) n_padded *= 2;
        while (data.size() < n_padded) {
            data.push_back(INT_MAX); 
        }

        
        bitonicSort(data, 0, n_padded, 1);

        
        cout << "Original Size: " << n_orig << " | Padded to: " << n_padded << endl;
        cout << "Comparisons: " << comparisonCount << " | Swaps: " << swapCount << endl;
        cout << "------------------------------------------------" << endl;
    }

    return 0;
}

  

