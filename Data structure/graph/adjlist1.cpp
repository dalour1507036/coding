#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* next;
};

node* Insert_begin(int start_v, int end_v);
void print(node* traverse_v);

node* head[6];

void print(node* traverse_v)
{
    while(traverse_v != NULL)
    {
        cout<<traverse_v->data;

        traverse_v = traverse_v->next;
    }
}

node* Insert_begin(int start_v, int end_v)
{
    node* temp = new node();
    temp->data=end_v;
    temp->next=NULL;

    if(head[start_v]==NULL)
    {
        head[start_v] = temp;
    }
    else{
        temp->next = head[start_v];
        head[start_v]=temp;
    }

    return head[start_v];
}

int main()
{
    int n;
    cout<<"enter the number of vertex in the graph:";
    cin>>n;

    int edges;
    cout<<"enter number of edges:";
    cin>>edges;

    //make the head nodes null initially
    for(int i=0; i<n; i++)
    {
        head[i]==NULL;
    }

    //node** arr = new node*[n];
    int start_v,end_v;
    for(int i=0; i<edges; i++)
    {
        cin>>start_v;
        cin>>end_v;
        //arr[start_v] =
        Insert_begin(start_v,end_v);

    }




    cout<<"enter vertex number to get its adjacent neighbour:";
    int vertex;
    cin>>vertex;
    print(head[vertex]);

    //to delete the heap memory
    /*for(int i=0; i<n; i++)
    {
        delete[]arr[i];
    }delete[]arr; */


       delete[]head;

return 0;
}
