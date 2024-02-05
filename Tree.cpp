#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* left;
    node* right;
    node(int value){
    data=value;
    left=right=nullptr;
    }
};
void Preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root<<" ";
    Preorder(root->left);
    Preorder(root->right);
}



int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    Preorder(root)

    
}