#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[n];
    
    cin>>name;
   // name[5]='\0';
    cout<<name;
    for(int i=0;i<n;i++){
    if(name[i]=='\0'){
        cout<<i<<" ";
        break;
    }
    }

    return 0;
}