#include<bits/stdc++.h>
using namespace std;

int Dupel(int arr[],int n){
 set<int> st;
 for(int i=0;i<n;i++){
    st.insert(arr[i]);
    //cout<<arr[i]<<" ";
 }
 return st.size();
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Dupel(arr,n);
    

    return 0;
}