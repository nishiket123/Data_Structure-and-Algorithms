#include<bits/stdc++.h>
int MergeSort(int arr[],int low,int High){
  int mid=(High+low)/2;
  if(low>=High){
    return;
  }
  MergeSort(arr,low,mid);
  MergeSort(arr,mid+1,High);

}
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
MergeSort(arr,arr[0],n-1);

    return 0;
}