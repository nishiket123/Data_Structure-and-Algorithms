#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;
    public:
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node* ArrtoDll(vector<int> arr){
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
    while(head !=NULL){
    cout<<head->data<<" ";
    head=head->next;
    }
}
node* DeleteHead(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* prev=head;
    head=head->next;
    prev->next=nullptr;
    head->back=nullptr;
    delete prev;
    return head;
}
node* DeleteTail(node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
     node* tail=head;
     while(tail->next!=NULL){
        tail=tail->next;
        
     }
     node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
int main(){
    vector<int> arr={12,13,15,16,18};
    node* head=ArrtoDll(arr);
   // node*temp=head;
    print(head);
    cout<<endl;
    head=DeleteHead(head);
    print(head);
    cout<<endl;
    head=DeleteTail(head);
    //DeleteHead(head);
    print(head);

 return 0;
}