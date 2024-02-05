#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    node(int data1){
    data=data1;
    next=nullptr;
    }


};
int main(){
vector<int> arr={12,13,11,9};
node* y=new node(arr[0]);
cout<<y->data<<" ";
cout<<y->next<<" ";

}