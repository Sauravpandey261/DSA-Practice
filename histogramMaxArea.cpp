#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxAreaHistogram(vector<int> height) {
    int n = height.size();
    vector<int> nsl(n), nsr(n);
    stack<int> s;

    // Next Smaller to Left (NSL)
    for (int i = 0; i < n; i++) {
        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }
        if (s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    // Clear stack for NSR
    while (!s.empty()) s.pop();

    // Next Smaller to Right (NSR)
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }
        if (s.empty()) {
            nsr[i] = n;
        } else {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    // Calculate Max Area
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = nsr[i] - nsl[i] - 1;
        int area = height[i] * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    vector<int> height = {2, 1, 5, 6, 2, 3};
    cout << "Maximum area in histogram = " << maxAreaHistogram(height) << endl;
    return 0;
}
