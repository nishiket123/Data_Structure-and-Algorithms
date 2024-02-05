#include<bits/stdc++.h>
using namespace std;
int DupEle(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<DupEle(arr,n);
return 0;
}