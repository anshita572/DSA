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
node *buildTree(node *root)
{

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);//recursive call
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);//recursive call
    return root;
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
void inorder(node*root)
{
    //base case)
    if(root==NULL)
    {return;}
    inorder(root->left);//L
    cout<<root->data<<" ";//N
    inorder(root->right);//R
}
void preorder(node*root)
{
    //base case)
    if(root==NULL)
    {return;}
    cout<<root->data<<" ";//N
    preorder(root->left);//L
    preorder(root->right);//R
    
}
void postorder(node*root)
{
    //base case)
    if(root==NULL)
    {return;}
    postorder(root->left);//L
    postorder(root->right);//R
    cout<<root->data<<" ";//N
    
}
int main()
{ /*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1*/
    node *root = NULL;
    root = buildTree(root);
    cout<<"Level order traversal : "<<endl;
    levelOrderTraversal(root);
    cout<<"inorder : " ;
    inorder(root);
    cout<<endl;
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder : ";
    postorder(root);
    cout<<endl;
    return 0;
}