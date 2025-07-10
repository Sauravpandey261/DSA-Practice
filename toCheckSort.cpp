#include <iostream>
using namespace std;

bool checkSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i]) > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {2, 31, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << checkSort(arr, size);

    return 0;
}