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
int main(){
    char ch;
    cin>>ch;
    cout<<Tolowecase(ch);

    return 0;
}