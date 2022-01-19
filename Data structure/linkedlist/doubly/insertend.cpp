 //doubly linked list
#include<bits/stdc++.h>

using namespace std;

class node{
  public:
    int data;
    node* next;
    node* prev;
};

node* head;

void Insert_end(int data);
void print_backward();
void print_forward();

void Insert_end(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if(head == NULL)
    {
        head = temp;
    }else{
        node* temp1 = head;
        node* last;
        while(temp1 != NULL)
        {
            last = temp1;
            temp1 = temp1->next;
        }
        last->next = temp;
        temp->prev = last;

    }
}

void print_forward()
{
    node* temp1 = head;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }

}

void print_backward()
{
    node* temp1 = head;
    node* last;
    while(temp1 != NULL)
    {
        last = temp1;
        temp1 = temp1->next;
    }
    head = last;
    node* temp2 =head;
    while(temp2 != NULL)
    {
        cout<<temp2->data<<" ";
        temp2 = temp2->prev;
    }

}

int main()
{
    int n;
    cout<<"enter how many elements in the doubly linked list:";
    cin>>n;

    int data;
    head=NULL;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        Insert_end(data);
        cout<<"The forward list is:";
        print_forward();
    }

     cout<<endl;
     cout<<"The backward list is:";
     print_backward();
}
