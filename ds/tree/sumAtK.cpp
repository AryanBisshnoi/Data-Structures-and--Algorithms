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

//sum of nodes at a level k
int sumAtK(btn<int> *root, int k)
{
    int count=0;
    if(root==NULL)
    return INT_MIN;
    queue<btn<int>*> q;
    q.push(NULL);
    if(root->lchild!=NULL)
    {
        q.push(root->lchild);
    }
    if(root->rchild!=NULL)
    {
        q.push(root->rchild);
    }
    while(!q.empty())
    {
        btn<int> *front=q.front();
        if(front==NULL)
        {
            q.pop();
            if(q.empty())
            {
                break;
            }
            q.push(NULL);
            count++;
            if(count==k)
            {
                int sum=0;
                while(q.front()!=NULL)
                {
                    sum=sum+q.front()->data;
                    q.pop();
                }
                return sum;
            }
        }
        else
        {
            q.pop();
            if(front->lchild!=NULL)
            {
                q.push(front->lchild);
            }
            if(front->rchild!=NULL)
            {
                q.push(front->rchild);
            }
        }  
    }
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

int main()
{
    int k, sum;
    btn<int> *root= createTree();
    cout<<"Enter sum at kth level:"<<endl;
    cin>>k;
    sum = sumAtK(root,k);
    if(sum!=INT_MIN)
    cout<<"Sum of nodes at "<<k<<"th level: "<<sum<<endl;
    else
    cout<<"No tree available"<<endl;
    return 0;
}