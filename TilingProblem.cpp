#include <iostream>
using namespace std;

int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return tilingProblem(n - 1) + tilingProblem(n - 2);
}

int main()
{
    int n = 8;
    cout << tilingProblem(n) << endl; // 2x4
    return 0;
}