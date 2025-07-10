#include <iostream>
using namespace std;

void largestElement(int arr[], int n)
{
    int maxElement = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int currMax = arr[i];
        if (arr[i] > maxElement)
        {
            maxElement = max(arr[i], currMax);
        }
    }
    cout << "max element in array is :" << maxElement << endl;
}

int main()
{
    int arr[5] = {2, 5, 6, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    largestElement(arr, size);
    return 0;
}
