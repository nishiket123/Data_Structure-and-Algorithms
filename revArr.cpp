#include<bits/stdc++.h>
using namespace std;
void RevArr(int i,int arr[],int n){
    
    if(i>=n/2){  // case when i reaches the middle element
        return;
    }
    swap(arr[i],arr[n-i-1]);  // if i is 1st element of arr and n-i-1 is last element of array swap
    RevArr(i+1,arr,n);
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
RevArr(0,arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}