#include<bits/stdc++.h>
using namespace std;
int SortedOrNot(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[n-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int res=SortedOrNot(arr,n);
    cout<<res;

    return 0;
}