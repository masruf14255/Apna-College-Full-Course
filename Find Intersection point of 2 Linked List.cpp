/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Find Intersection point of 2 Linked List | Lecture 22.8
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

int length(node* head)
{
    int l=0;
    node* temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1, node* head2)
{
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head;
        ptr2=head2;

    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }


    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;

        }
        d--;
    }

    while(ptr1!=NULL && ptr2!==NULL)
        {
            if(ptr1==ptr2)
            {
                return ptr1->data;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }

        return -1;


}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    intersection(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;
    return 0;

}
