#include<bits/stdc++.h>
using namespace std;
void NtimeNm(string n){
    cout<<n<<" ";
NtimeNm(n);
}

int main(){
    string name;
    cin>>name;
    NtimeNm(name);
    //cout<<res;

    return 0;
}