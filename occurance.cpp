#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printArr(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void occurance(vector<int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    
    int j=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            temp.push_back(arr[i]);
        }
            s
    }
    printArr(temp);
}

int main()
{
    vector<int> arr={1,2,1,6,87,8,2,3,1,4,5};
    occurance(arr);

    return 0;
}