#include<bits/stdc++.h>

using namespace std;
//this function will fing duplicate array having value ranging 1 to  100

int hash_table[100];

int main()
{
    int n;
    cout<<"enter the array size:"<<endl;
    cin>>n;

    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //scan the array and make the hsah table

    for(int i=0; i<n; i++)
    {
        int key = (arr[i]%100);
        hash_table[key] += 1;
    }

    for(int i=0; i<n; i++)
    {
        if(hash_table[arr[i]%100]>1)
        {
            cout<<"duplicate:"<<" "<<arr[i]<<"count is:"<<hash_table[arr[i]]<<endl;
        }
    }

}
