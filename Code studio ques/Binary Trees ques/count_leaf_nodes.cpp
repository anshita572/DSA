//https://bit.ly/3Lyh6kC

//TC:O(n) where n=no. of nodes in binary tree
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//traverse the binary tree in any order
void inorder(BinaryTreeNode<int> *root,int &count)
{
    //base case)
    if(root==NULL)
    {return;}
    inorder(root->left,count);//L
    //cout<<root->data<<" ";//N
    if(root->left==NULL && root->right==NULL) //i.e. no child
    {count++;}
    inorder(root->right,count);//R
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
   int count=0;
    inorder(root,count);
    return count;
}