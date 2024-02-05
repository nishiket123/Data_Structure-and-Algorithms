#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;   // fifo
    q.push(19);
    q.push(20);
    q.push(21);
    q.push(22);
    q.pop();

    q.back() +=6;
    cout<<q.front()<<" ";
    cout<<q.back();
    return 0;
}