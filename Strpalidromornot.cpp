#include<bits/stdc++.h>
using namespace std;
bool PaliOrN(int i,string str){
  if(i>=str.size()/2)  return true;
  if(str[i]!=str[str.size()-i-1]) return false;
  return PaliOrN(i+1,str);
}
int main(){
    string str="MADAM";
    int res=PaliOrN(0,str);
    cout<<res;
    return 0;
}