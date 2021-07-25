/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Append Last K Nodes of a Linked List | C++ Placement Course | Lecture 22.7
#include<bits/stdc++.h>
using namespace std;


class node()
{
public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head->prev=n;

    head=n;
}

void insertAtTail(node* &head, int val)
{


    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* n=new node(val);
    node* temp=head;

    while(temp->next=NULL)
    {
        temp=temp->next;
    }
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int len(node *head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newTail=tail;
        }
        if(count==l-k+1)
        {
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newHead=kappend(head);
    display(newHead);

    return 0;

}
