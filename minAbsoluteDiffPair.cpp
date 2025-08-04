#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> A={1,2,3,9,7};
    vector<int> B={3,1,2,8,5};

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int absDiff=0;

    for(int i=0;i<A.size();i++){
        absDiff+=abs(A[i]-B[i]);
    }

    cout<<"Minimum absolute diff is: "<<absDiff<<endl;

    
    return 0;
}