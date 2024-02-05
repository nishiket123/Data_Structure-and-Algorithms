#include<bits/stdc++.h>
using namespace std;
int FacNum(int n){
    while(n!=0){
    return n*FacNum(n-1);
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
   int res=FacNum(n);
   cout<<res;

    return 0;
}