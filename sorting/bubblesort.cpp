#include<bits/stdc++.h>

using namespace std;

bubble_sort(int *arr, int n)
{
    for(int i=0; i<=n-2;i++)
    {
        int flag=0;//if array is sorted not a single swap will happen
    for(int k=0; k<=n-2-i; k++)
    {
        if(arr[k]>arr[k+1]){swap(arr[k],arr[k+1]); flag=1;}
    }
    if(flag==0){break;}
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    int *arr = new int[n];

    //array input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    //array after sorting
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
