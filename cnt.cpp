#include<bits/stdc++.h>
using namespace std;
int ContDigit(int n){
    int cnt=0;
    while(n>0){
        int lastdigit=n%10;
        cnt=+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int n=76;
    int res=ContDigit(n);
    cout<<res;
    return 0;

}