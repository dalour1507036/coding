#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }arr[hole]=value;
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

    insertion_sort(arr,n);

    //array after sorting
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
