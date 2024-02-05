#include<bits/stdc++.h>
using namespace std;
class Stackarr{
    public:
    int size;
    int *arr;
    int top;
void Stack(){
  top=-1;
  size=10001;
  arr=new int[size];
}
void push(int x){
 top++;
 arr[top]=x;
}
int top(){
    return arr[top];
}
int Size(){
    return top+1;
}

};
int main(){
 Stackarr st;
st.push(12);
st.push(200);
cout<<st.top()<<" ";
cout<<st.top()-1;
    return 0;
}