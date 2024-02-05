#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    public:
   node(int data1){
        data=data1;
        next=nullptr;
    } 
};
int main(){

vector<int> arr={11,12,14,16};
node* y=new node(arr[1]);
cout<<y->data<<" ";
cout<<y->next;
    return 0;
}
