#include <stdio.h>
#include <stdlib.h>

struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
}

void Preorder(BSTNode * root){
  if(root == NULL)
     return;
  
  printf("%d ", root->data);
  Preorder(root->left);
  Preorder(root->right);
}

void Inorder(BSTNode * root){
  if(root == NULL)
     return;
  
  Inorder(root->left);
  printf("%d ", root->data);
  Inorder(root->right);
}

void Postorder(BSTNode * root){
  if(root == NULL)
     return;
  
  Postorder(root->left);
  Postorder(root->right);
  printf("%d ", root->data);
}
