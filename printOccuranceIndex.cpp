#include<iostream>
using namespace std;

void findAllOccurrences(int arr[], int n, int i, int key) {
    if(i == n) return;

    if(arr[i] == key) {
        cout << i << " ";
    }

    findAllOccurrences(arr, n, i + 1, key);
}

int main() {
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;

    cout << "Indices of key " << key << " are: ";
    findAllOccurrences(arr, n, 0, key);
    cout << endl;

    return 0;
}
