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
node* ReverseLl(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
 
 node* prev=NULL;
 node* current=head;
 while(current!=NULL){
 prev=current->prev;
 current->prev=current->next;
 current->next=prev;
 current=current->prev;
 }
 return prev->prev;
 
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