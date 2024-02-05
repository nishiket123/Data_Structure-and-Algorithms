#include<bits/stdc++.h>
using namespace std;
int FreqEle(int num,int arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cnt=cnt+1;
        }
    }
    return cnt;
}
int main(){
    int n,ele;
    cin>>n>>ele;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=FreqEle(ele,arr,n);
    cout<<res;


    return 0;
}