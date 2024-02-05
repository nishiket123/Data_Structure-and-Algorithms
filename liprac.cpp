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
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
    
};
node* ArrtoLL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
       node* temp=new node(arr[i]);
       mover->next=temp;
       mover=temp;  // or mover=temp;
    }
        return head;
    }
    int lenArr(node* head){
        int cntr=0;
        node* temp=head;
        while(temp){
            temp=temp->next;
            cntr++;
        }
        return cntr;
    }
    int SearchEle(node* head,int val){
        node* temp=head;
        while(temp){
            if(temp->data==val)
                return 1;
                temp=temp->next;
            
        }
        return 0;
    }
int main(){
vector<int> arr={11,12,13,14,6};
//node* head=new node(arr[0]);
node* head=ArrtoLL(arr);
int len=lenArr(head);
//cout<<len;
cout<<SearchEle(head,6);
/*node* temp=head;
while(temp != nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
//cout<<head->data;
//node* n=new node(arr[0]);
//cout<<n->data<<" ";
//cout<<n->next;
//node* y=new node(1,nullptr); */

    return 0;
}