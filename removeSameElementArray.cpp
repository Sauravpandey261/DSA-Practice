#include <iostream>
using namespace std;

int removeSameElement(int arr[], int n) {
    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // new size
}

int main() {
    int arr[8] = {1, 1, 1, 2, 2, 3, 4, 5};
    int newSize = removeSameElement(arr, 8);

    cout << "New Array: ";
    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
