#include<iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar) {
    if (si > ei) {
        return -1;
    }
    
    int mid = si + (ei - si) / 2;

    if (arr[mid] == tar) {
        return mid;
    }

    // Check if left half is sorted
    if (arr[si] <= arr[mid]) {
        // Target in the left half
        if (arr[si] <= tar && tar <= arr[mid]) {
            return search(arr, si, mid - 1, tar);
        } else {
            return search(arr, mid + 1, ei, tar);
        }
    }
    // Else, right half must be sorted
    else {
        if (arr[mid] <= tar && tar <= arr[ei]) {
            return search(arr, mid + 1, ei, tar);
        } else {
            return search(arr, si, mid - 1, tar);
        }
    }
}

int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 3;
    
    int result = search(arr, 0, n - 1, target);
    cout << "Idx: " << result << endl;
    
    return 0;
}
