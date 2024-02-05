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

node* convertArr2ll(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
 int lenlinkedl(node* head){
    int cnt=0;
    node* temp=head;
    while(temp){
    temp=temp->next;
    cnt++;
    }
    return cnt;
 }

 int checkEle(node* head,int val){
        node* temp=head;
        while(temp){
            if(temp->data==val) return 1;
            temp=temp->next;
        }
        return 0;
    }

    
    

int main(){
    vector<int> arr={12,13,15,16,18,19};
    //node* m=new node(arr[0]);
    //cout<<m->data<<" ";
    //cout<<m->next;
   
   node* head=convertArr2ll(arr);
    cout<<lenlinkedl(head)<<" ";
    cout<<checkEle(head,1);
    //node* temp=head;
    //cout<<head->data;
  /*  while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    */

    return 0;
}