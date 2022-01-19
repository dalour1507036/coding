#include<bits/stdc++.h>

using namespace std;


int main()
{
    int arr[100];
    int n;

    cout<<"enter the number:"<<endl;
    cin>>n;

    int k=0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            arr[k++]=i;
            if(i*i != n){arr[k++]=n/i;}


        }
    }arr[k]=-1;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        if(arr[i]==-1){break;}
        cout<<arr[i]<<endl;

    }
}
