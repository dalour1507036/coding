#include<bits/stdc++.h>

using namespace std;


class node{
   public:
       int data;
       node* next;
};

void Insert_end(int data);
void print();
void reverse_recursion(node* temp);



node* head;

void reverse_recursion(node* temp)
{
    if(temp->next == NULL)
    {
        head = temp;
        return;
    }

    reverse_recursion(temp->next);
    node* last = temp->next;
    last->next = temp;
    temp->next = NULL;
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
        node* last_node;
        while(temp1 != NULL)
        {
          last_node = temp1;
          temp1 =temp1->next; //will ultimately hold the last node of the list
        }
        last_node->next = temp;
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
        print();
    }

    cout<<endl;
    cout<<"reverse list by recursion is here:"<<endl;
    reverse_recursion(head);
    print();


}

