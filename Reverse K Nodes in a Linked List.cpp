/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

Reverse K Nodes in a Linked List | C++ Placement Course | Lecture 22.4

#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;


    node(int val)
    {
        data =val;
        next=NULL;
    }
};


void insertAthead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;

}

void insertAt(node* &head, int val)
{
    node* n = new node(val)

    if(head==NULL)
    {
        head=n;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reversek(node* &head, int k)
{
    node* prevptr=NULL;
    node* curptr=head;
    node* nextptr;

    int cnnt=0;
    while(curptr!=NULL && cnnt<k)
    {
        nextptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
        curptr=nextptr;
        cnnt++;

    }

    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr,k);
    }

    return prevptr;


}

/*bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void deleteatahead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val)
{

    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteatahead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}*/


/*node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* curptr=head;
    node* nextptr;

    while(cur!=NULL)
    {
        nextptr=cur->next;
        curptr->next=prevptr;


        prevptr=curptr;
        curptr=nextptr;

    }

    return prevptr;
}

node* reverseRecursive(node* &head)
{


    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* newhead= reverseRecursive(head->next)
    head->next->next=head;
    head->next=NULL;

    return newhead;
}*/

int main()
{
    node* head=NULL;
    /*insertAt(head,1);
    insertAt(head,2);
    insertAt(head,3);
    display(head);
    insertAthead(head,4);
    cout<<search(head,5);
    cout<<search(head,3);

    //deletion(head,3);
    //deleteatahead(head);
    display(head);

    node* newhead=reverseRecursive(head);
    display(head);*/

    insertAt(head,1);
    insertAt(head,2);
    insertAt(head,3);
    insertAt(head,4);
    insertAt(head,5);
    insertAt(head,6);

    display(head);
    int k=2;
    node* newj=head=reversek
    display(newhead);


    return 0;
}
