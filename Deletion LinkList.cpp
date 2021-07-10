Deletion in Linked List | C++ Placement Course | Lecture 22.2

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

bool search(node* head,int key)
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
}

int main()
{
    node* head=NULL;
    insertAt(head,1);
    insertAt(head,2);
    insertAt(head,3);
    display(head);
    insertAthead(head,4);
    cout<<search(head,5);
    cout<<search(head,3);

    //deletion(head,3);
    deleteatahead(head);
    display(head);


    return 0;
}
