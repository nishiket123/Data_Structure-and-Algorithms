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

void Addnode(node* head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void Printval(node* head){
node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(29);
    node* head=node1;
    Printval(head);
    Addnode(head,0);
    Printval(head);
    
    
    

return 0;
}