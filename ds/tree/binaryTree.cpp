#include<iostream>
#include "binaryTree.h"
#include<queue>
#include<limits.h>
using namespace std;

//create a binary tree.
btn<int>* createTree()
{
    int rootdata;
    cout<<"Enter root data: "<<endl;
    cin>> rootdata;
    btn<int> *root = new btn<int>(rootdata);
    queue<btn<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        btn<int> *front = q.front();
        q.pop();
        int leftChildData, rightChildData;
        cout<< "Enter left child of "<<front->data<<endl;
        cin>> leftChildData;
        if(leftChildData != -1)
        {
            btn<int> *leftchild = new btn<int>(leftChildData);
            front->lchild = leftchild;
            q.push(leftchild);
        }
        cout<< "Enter right child of "<<front->data<<endl;
        cin>> rightChildData;
        if(rightChildData != -1)
        {
            btn<int> *rightchild = new btn<int>(rightChildData);
            front->rchild = rightchild;
            q.push(rightchild);
        }
    }
    return root;
    
}

//print it.
void print(btn<int> *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<": ";
    if(root->lchild!=NULL)
    {
        cout<<root->lchild->data<<", ";
    }
    if(root->rchild!=NULL)
    {
        cout<<root->rchild->data;
    }
    cout<<endl;
    print(root->lchild);
    print(root->rchild);

}

//height of a binary tree.
int height(btn<int> *root)
{
    if(root==NULL)
    return 0;
    return (1+max(height(root->lchild), height(root->rchild)));
}


//count number of nodes
int countNodes(btn<int> *root)
{
    if(root==NULL)
    return 0;
    return 1+countNodes(root->lchild)+countNodes(root->rchild);
}


//diameter of the tree
int diameter(btn<int> *root)
{
    if(root==NULL)
    return 0;
    int opt1 = height(root->lchild)+height(root->rchild);
    int opt2 = diameter(root->lchild);
    int opt3 = diameter(root->rchild);
    return max(opt1, max(opt2, opt3));
}

//preorder traversal
void preorder(btn<int> *root)
{
    if(root!=NULL)
    {
        cout<< root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

//inorder traversal
void inorder(btn<int> *root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        cout<< root->data<<" ";
        inorder(root->rchild);
    }
}

//postorder traversal
void postorder(btn<int> *root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        cout<< root->data<<" ";
    }
}

//sum of nodes of a binary tree.
int sumOfNodes(btn<int> *root)
{
    if(root==NULL)
    return 0;
    return root->data + sumOfNodes(root->lchild) + sumOfNodes(root->rchild);
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

int main()
{
    int k, sum;
    btn<int> *root= createTree();
    print(root);
    cout<<"Height of the binary tree is: "<<height(root)<<endl;
    cout<<"Number of nodes in binary tree: "<<countNodes(root)<<endl;
    cout<<"Diameter of the binary tree is: "<<diameter(root)<<endl;
    cout<<"Preorder traversal: "<<endl;
    preorder(root);
    cout<<endl<<"Inorder traversal: "<<endl;
    inorder(root);
    cout<<endl<<"Postorder traversal: "<<endl;
    postorder(root);
    cout<<endl<<"Sum of Nodes: "<<sumOfNodes(root)<<endl;
    return 0;
}