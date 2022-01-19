#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* next;
};

node* head[100];
int vis[100];




void adjacent_list(int a, int b)
{
    node* temp = new node();
    temp->data=b;
    temp->next=NULL;

    if(head[a]==NULL)
    {
        head[a]=temp;
    }
    else
    {
        temp->next = head[a];
        head[a]=temp;
    }
}

void dfs(int v)
{
    cout<<v<<" ";
    vis[v]=1;

    node* temp = head[v];
    while(temp != NULL)
    {
        if(vis[temp->data]==0)
        {
            dfs(temp->data);
        }
        temp = temp->next;
    }

}

void bfs(int v)
{
    queue<int>q;
    q.push(v);

    int top;
    while(!q.empty())
    {
         top = q.front();
         vis[top]=1;
         q.pop();

         cout<<top<<" ";



        node* temp = head[top];
        while(temp != NULL)
        {
            if(vis[temp->data]==0)
            {
                q.push(temp->data);
            }

            temp = temp->next;
        }
    }

}

int main()
{
    int n,e;//number of vertex and edges
    int v;//source vertex variable

    cin>>e;
    for(int i=0; i<100; i++)
    {
        head[i]=NULL;
    }

    int start_v,end_v;
    for(int i=0; i<e; i++)
    {
        cin>>start_v>>end_v;
        adjacent_list(start_v,end_v);
        adjacent_list(end_v,start_v);
    }

    cout<<"adjacent list has been built"<<endl;
    cout<<"enter the source vertex for dfs:"<<endl;


    cin>>v;
    //dfs(v);

    bfs(v);

}
