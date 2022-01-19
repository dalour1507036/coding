#include<bits/stdc++.h>

using namespace std;

class bstnode{
public:
    int data;
    bstnode* left;
    bstnode* right;
};

bstnode* getnewnode(int data)
{
    bstnode* temp = new bstnode();

    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

bstnode* insert_node(bstnode* root, int data)
{
    if(root == NULL)
    {
        root = getnewnode(data);
    }
    else if(data <= root->data){root->left = insert_node(root->left,data);}
    else {root->right = insert_node(root->right,data);}

    return root;

}

bool search_tree(bstnode* root, int data)
{
    if(root == NULL){return false;}
    else if (data == root->data ){return true;}
    else if (data<= root->data) return search_tree(root->left,data);
    else return search_tree(root->right,data);
}

int find_min(bstnode* root)
{
    if(root == NULL){ cout<<"empty tree"<<endl; return -1; }
    else if( root->left==NULL ){return root->data ; }
    else{ find_min(root->left) ; }
}

int find_max(bstnode* root)
{
    if(root == NULL){ cout<<"empty tree"<<endl; return -1; }
    else if(  root->right==NULL ){return root->data ; }
    else{ find_max(root->right) ; }
}

int main()
{
    int n,data;
    cout<<"enter the number of elments in the tree:"<<endl;
    cin>>n;


    bstnode* root = NULL;

    for(int i=0; i<n; i++)
    {
        cin>>data;
        root = insert_node(root,data);

    }

    /*
    int b;
    cout<<"enter the data to search in bst:"<<endl;
    cin>>b;

    if(search_tree(root,b)){cout<<"element found"<<endl;}
    else{cout<<"not found"<<endl;}

     */

    cout<<"finding minimum element:"<<endl;
    int result = find_min(root);
    cout<<result<<endl;

    cout<<"finding maximum element:"<<endl;
    result = find_max(root);
    cout<<result<<endl;




}
