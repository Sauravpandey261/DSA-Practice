#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int> arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    int idxfound=lastOccur(arr,i+1,target);
    if(idxfound==-1 && arr[i]==target){
        return i;
    }
    return idxfound;
}

int main()
{
    vector<int> arr={1,2,3,3,3,4};
    cout<<lastOccur(arr,0,3);
    return 0;
}