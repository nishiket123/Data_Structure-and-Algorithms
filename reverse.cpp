#include<bits/stdc++.h>
using namespace std;

void RevNum(int n){
    int revnum=0,dup=n;
    while(n>0){
        int lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    if(dup==revnum){
        cout<<"it is a palidrome";
    }
    else{
        cout<<"Not a palidrome";
    }
}
int main(){
    int n;
    cin>>n;
    RevNum(n);

    return 0;
}