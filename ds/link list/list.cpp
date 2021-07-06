#include<iostream>
#include<limits.h>
#include "node.h"
using namespace std;


node* input(node *head)
{

    node *temp;
    int data;
    scanf("%d",&data);
    while(data != -1)
    {
        node *n1=new node(data);
        if(head==NULL)
        {
        head=n1;
        temp=n1;
        }
        else
        {
            temp->next=n1;
            temp=temp->next;
        }
        scanf("%d",&data);
    }
    return head;
}

void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

node* insert(node *head,int i, int key)
{
    int count=0;
    node *p,*q;
    if(i==0)
    {
        node *newNode=new node(key);
        newNode->next=head;
        head=newNode;
    }
    else
    {
        p=q=head;
        while(p!=NULL && count<i-1)
        {
            p=p->next;
            count++;
        }
        q=p->next;
        node *newNode=new node(key);
        newNode->next=q;
        p->next=newNode;
    }
    
    return head;
}

node* deleteNode(node *head,int i)
{  
    node *p,*q;
    p=q=head;
    int count=0;
    if(i==0)
    {
        head=head->next;
        p->next=NULL;
    }
    else
    {
        while(count<i-1)
        {
            p=p->next;
            count++;
        }
        q=p->next;
        if(q->next==NULL)
        {
            p->next=NULL;
        }
        else
        {
             p->next=q->next;
            q->next=NULL;   
        }
    }
    return head;
}


int main()
{
    node *head=NULL;
    head=input(head);
    print(head);

    printf("\nWhat value should be inserted at which index?\n");
    int key,i;
    scanf("%d %d",&key,&i);
    head = insert(head,i,key);
    print(head);

    printf("enter which index needs to be deleted\n");
    scanf("%d",&i);
    head = deleteNode(head,i);
    print(head);

    return 0;
}

