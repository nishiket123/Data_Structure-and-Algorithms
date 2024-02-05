#include<bits/stdc++.h>
using namespace std;
int Lenstr(char name[]){
    int count=0;
for(int i=0;name[i]!='\0';i++){
   count++;
}
return count;
}
int main(){
    int n;
    cin>>n;
    char name[n];
    cout<<"len of string is: "<<" ";
    cin>>name;
    cout<<name<<" ";
    int res=Lenstr(name);
    cout<<res;

    return 0;
}