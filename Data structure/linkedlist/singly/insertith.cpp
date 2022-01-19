#include<bits/stdc++.h>

using namespace std;

void Insert_end(int data);
void print();
void Insert_ith(int pos,int data);


class node{
   public:
       int data;
       node* next;
};


node* head;

void Insert_ith(int pos, int data)//begin insert has not beeen counted
{
    node* temp = new node();
    temp->data = data;
    temp->next =NULL;

    node* temp1= head;
    for(int i=1; i<= pos-2; i++)
    {
        temp1= temp1->next;
    }

    temp->next = temp1->next;
    temp1->next= temp;
}

void Insert_end(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;

    if(head==NULL)
    {
      head = temp;
    }
    else{
        node* temp1 = head;
        //node* last_node;
        while(temp1->next != NULL)
        {
          //last_node = temp1;
          temp1 =temp1->next; //will ultimately hold the last node of the list
        }
        temp1->next = temp;
    }
}

void print()
{
     node* temp1 = head;
        while(temp1 != NULL)
        {
          cout<<temp1->data<<" ";
          temp1 =temp1->next; //will ultimately hold the last node of the list
        }
}



int main()
{
    int n;
    cout<<"enter how many elements:";
    cin>>n;

    int data;
    head=NULL;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        Insert_end(data);
        //print();
    }print();

    cout<<endl;
    cout<<"insert element at ith position of the list:"<<endl;
    cout<<"pos:value:"<<endl;

    int pos;
    int value;
    cin>>pos;
    cin>>value;

    Insert_ith(pos, value);
    print();


}

