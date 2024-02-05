#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int val){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
         high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;

}
int main(){
    int n,Target;
    cin>>n>>Target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=BinarySearch(arr,n,Target);
    cout<<res;
    return 0;
}