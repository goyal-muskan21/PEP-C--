#include<iostream>
using namespace std;

class tree {
    public:
    int data;
    tree *left;
    tree *right;
    tree(int d)
    {
     data=d;
     left=NULL;
     right=NULL;
    }
    void preOrder(tree *root){
     if(root==NULL){
          return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
     }
     void inOrder(tree *root){
          if(root==NULL){
               return;
          }
          inOrder(root->left);
          cout<<root->data<<" ";
          inOrder(root->right);
     }
     void postOrder(tree *root){
          if(root==NULL){
               return;
          }
          postOrder(root->left);
          postOrder(root->right);
          cout<<root->data<<" ";
     }
     
};


int main(){
     tree *root = new tree(1);
     root->left = new tree(2);
     root->right = new tree(3);

     root -> left -> left = new tree(4);
     root -> left -> right = new tree(5);
     root -> right -> left = new tree(6);
     root -> right -> right = new tree(7);

     root->preOrder(root);
     cout<<endl;
     root->inOrder(root);
     cout<<endl;
     root->postOrder(root);
     cout<<endl;
}