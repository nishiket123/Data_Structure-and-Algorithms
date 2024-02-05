#include<bits/stdc++.h>
using namespace std;
int Largele(int arr[],int n){
int lar=INT_MIN;
for(int i=0;i<n;i++){
    if(lar<arr[i]){
        lar=arr[i];
    }
}
return lar;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largele=Largele(arr,n);
    cout<<largele;
    return 0;
}