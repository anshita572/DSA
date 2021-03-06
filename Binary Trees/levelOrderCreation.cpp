#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d) // constructor
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void bulidFromLevelOrder(node* &root)
{
    queue<node*>q;
    int data;
    cout<<"Enter data for root"<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
        }

    }
}
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}
int main()
{
    node*root=NULL;
    bulidFromLevelOrder(root);
    levelOrderTraversal(root);

    
}