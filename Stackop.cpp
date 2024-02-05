#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
  st.push(12);
  st.pop();
  st.push(10);
  st.push(11);
  st.push(99);
  st.push(100);
  st.pop();
  cout<<st.top()<<" ";
    return 0;
}