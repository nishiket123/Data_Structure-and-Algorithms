#include<bits/stdc++.h>
using namespace std;
int lenstr(char name[]){
 int count=0;
 for(int i=0;name[i]!='\0';i++){
     count++;
 }
 return count;
}
void ReverSt(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int main(){
    int n;
    cin>>n;
    char name[n];
    cin>>name;
    cout<<"My name is: "<<endl;
    cout<<name<<endl;
    int num=lenstr(name);
    cout<<"Reverse String is"<<endl;
    ReverSt(name,num);
    cout<<name;

    return 0;
}