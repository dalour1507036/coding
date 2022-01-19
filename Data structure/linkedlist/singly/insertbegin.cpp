#include<bits/stdc++.h>

using namespace std;
void insert_begin(int data);
void print();

class node{
    public:
    int data;
    node* next;
};

node* head;
void insert_begin(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->next=NULL;

    if(head==NULL)//empty list
    {
        head=temp;
    }
    else{
    temp->next =head;
    head=temp;
    }

}

void print()
{
    node* temp =head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main()
{
    int n,data;
    cout<<"How many elements:";
    cin>>n;
    head=NULL;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        insert_begin(data);
        cout<<"the list is:"<<endl;
        print();

    }

}
