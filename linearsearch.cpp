#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n,v;
    cin>>n>>v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=LinearSearch(arr,n,v);
    cout<<res;
    return 0;
}