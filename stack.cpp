#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(11); // insert element   main ftn are push,pop and top
    st.push(12);
    st.push(13);
    st.push(14);
    st.pop();  //delete
    //st.pop();
    cout<<st.top()<<" ";
    cout<<st.empty();

    return 0;
}