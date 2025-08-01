#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void queueReverse(queue<int> &q){

    stack<int> s;

    int n=q.size();
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

   
}

int main()
{
    queue<int> q;
    
    cout<<"original: ";

    for(int i=1;i<=5;i++){
        q.push(i);
        cout<<i<<" ";
    }
    cout<<endl;

    queueReverse(q);

    cout<<"reverse: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}