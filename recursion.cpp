#include<iostream>
using namespace std;

void printReverse(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    printReverse(n-1);
}
void printFun(int n){
    if(n==0){
        return ;
    }
    printFun(n-1);
    cout<<n<<" ";
}

int main()
{
    cout<<"Print numbers in asc order: ";
    printFun(5);
    cout<<endl;
    cout<<"Print numbers in des order: ";
    printReverse(5);
    return 0;
}