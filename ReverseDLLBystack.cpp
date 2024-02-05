#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    public:
    node(int data1,node* next1,node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
node* ArrLL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void ReverseLl(node* head){
 stack<int> st;
 node* temp=head;
 while(temp!=NULL){
 st.emplace(temp->data);
 temp=temp->next;
 }
 temp=head;
 while(temp!=NULL){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
 }
}

int main(){
vector<int> arr={12,13,14,15,16};
node* head=ArrLL(arr);
cout<<"The original Linked list is:"<<endl;
print(head);
cout<<endl;
cout<<"The reversed linked list is:"<<endl;
ReverseLl(head);
print(head);
return 0;
}