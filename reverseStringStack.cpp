#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;
}

int main()
{
    string str="abcdefg";
    string str2="hello world";
    cout<<"reverse = "<<reverseString(str)<<endl;
    cout<<"reverse2 = "<<reverseString(str2)<<endl;

    return 0;
}