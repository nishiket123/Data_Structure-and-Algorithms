#include<bits/stdc++.h>
using namespace std;
string RevStr(int i,string str){
    int n=str.size();
if(i>=n/2){
return;
}
    swap(str[i],str[n-i-1]);

return RevStr(i+1,str);
}


int main(){
    string str="Nishiket";
string res=RevStr(0,str);
cout<<res;
    return 0;
}