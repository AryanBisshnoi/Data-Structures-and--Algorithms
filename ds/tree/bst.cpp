#include<iostream>
#include"binaryTree.h"
using namespace std;

btn<int>* createBST(btn<int> *root, int d)
{
    if(root==NULL)
    {
        btn<int> *newNode = new btn<int>(d);
        root=newNode;
    }
    else if(root->data > d)
        root->lchild=createBST(root->lchild, d);

    else if(root->data < d)
        root->rchild=createBST(root->rchild, d);

    return root;
}

void inorder(btn<int> *root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        cout<< root->data<<" ";
        inorder(root->rchild);
    }
}

bool search(btn<int> *root, int value)
{
    if(root==NULL)
        return false;
    if(root->data==value)
        return true;
    if(root->data>value)
        return search(root->lchild,value);
    if(root->data<value)
        return search(root->rchild,value);
}


btn<int>* inorderSuccessor(btn<int> *root)
{
    btn<int> *curr=root;
    while(curr->lchild!=NULL)
    {
        curr=curr->lchild;
    }
    return curr;
}


btn<int>* deleteBst(btn<int> *root, int key)
{
    if(root->data > key)
    {
        root->lchild=deleteBst(root->lchild, key);
    }
    else if(root->data < key)
    {
        root->rchild=deleteBst(root->rchild, key);
    }
    //found the node to be deleted. now check case it belongs to.
    else
    {   //Case 1 & 2 for single child.
        if(root->lchild==NULL)
        {       
            btn<int> *temp=root->rchild;    
            free(root);
            return temp;
        }
        else if(root->rchild==NULL)
        {
            btn<int> *temp=root->lchild;
            free(root);
            return temp;
        }
        //case3
        else
        {
            btn<int> *temp = inorderSuccessor(root->rchild);
            root->data=temp->data;
            root->rchild=deleteBst(root->rchild,temp->data);
        }        
    }
    return root;
}


int main()
{
    btn<int> *root=NULL;

    root=createBST(root, 5);
    root=createBST(root, 1);
    root=createBST(root, 3);
    root=createBST(root, 4);
    root=createBST(root, 2);   
    root=createBST(root, 6);

    // inorder trversal of a bst prints tree in sorted order.
    inorder(root);
    cout<<endl;

    // search an element.
    if(search(root,4))
    cout<<"element found"<<endl;
    else
    cout<<"not found"<<endl;

    // delete a node.
    root=deleteBst(root,5);
    inorder(root);

    return 0;
}