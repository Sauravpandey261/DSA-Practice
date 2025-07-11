#include<iostream>
using namespace std;

int gridWays(int r,int c,int n,int m,string ans){
    if(r==n-1 && c==m-1){
        cout<<ans<<endl;
        return 1 ;
    }
    if(r>=n || c>=m){
        return 0;
    }
    //right 
    gridWays(r,c+1,n,m,ans+"R");

    //down
    gridWays(r+1,c,n,m,ans+"D");
}

int main()
{
    int n=3;
    int m=3;
    string ans="";
    gridWays(0,0,n,m,ans);
    return 0;
}