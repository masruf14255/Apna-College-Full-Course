
/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Merge 2 Sorted Linked List | C++ Placement Course | Lecture 22.9
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

node* merge(node* &head1, node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);
    node* p3=dummyNode;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p1;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    int arr[]={1,4,5,7};
    int arr[]={2,3,6};
    for(int i=0; i<4; ++i)
    {
        insertAtTail(head1,arr1[i]);
    }
    for(int i=0; i<3; ++i)
    {
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    new* newhead=merge(head1,head2);

    display(newhead);
    return 0;

}
