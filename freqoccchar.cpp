#include<bits/stdc++.h>
using namespace std;
int FreqOchar(string str,char val){
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==val){
            cnt++;
        }
    }
    return cnt++;
}
int main(){
    string str;
    char ele;
    cin>>str>>ele;
    int res=FreqOchar(str,ele);
    cout<<res;
    return 0;
}