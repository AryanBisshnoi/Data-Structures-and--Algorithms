#include<iostream>
#include "binaryTree.h"
#include<queue>
#include<limits.h>
using namespace std;

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

int height(btn<int> *root)
{
    if(root==NULL)
    return 0;
    return 1 + max(height(root->lchild),height(root->rchild));
}

//Check if a binary tree is balaned or not?
bool balanceBinaryTree(btn<int> *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(balanceBinaryTree(root->lchild)==false)
    {
        return false;
    }
    if(balanceBinaryTree(root->rchild)==false)
    {
        return false;
    }

    int lh=height(root->lchild);
    int rh=height(root->rchild);
    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

int main()
{
    int k, sum;
    btn<int> *root= createTree();
    if(balanceBinaryTree(root))
    {
        cout<<"Balance tree"<<endl;
    }
    else
    cout<<"Not Balanced tree"<<endl;
    return 0;
}