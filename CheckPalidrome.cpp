#include<bits/stdc++.h>
using namespace std;
char Tolowecase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}
bool PalidromeOrN(char name[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(Tolowecase(name[s])!=Tolowecase(name[e])){
        return 0;
    }
    else{
        s++;
        e--;

    }
}
return 1;
}
int main(){
int n;
cin>>n;
char name[n];
cin>>name;
cout<<PalidromeOrN(name,n);
    return 0;
}