#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char helper, char dest)
{
    if (n == 0)
        return;

    // Step 1: Move n-1 disks from source to helper
    towerOfHanoi(n - 1, src, dest, helper);

    // Step 2: Move nth disk from source to destination
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // Step 3: Move n-1 disks from helper to destination
    towerOfHanoi(n - 1, helper, src, dest);
}

int main()
{
    int n = 3; // number of disks
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
