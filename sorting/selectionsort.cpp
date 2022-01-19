#include<bits/stdc++.h>

using namespace std;

void selection_sort(int *arr,int n)
{
    for(int i=0; i<=n-2; i++)
    {
        int imin =i;
        for(int k=i+1; k<n; k++)
        {
            if(arr[k]<arr[imin]){
                imin = k;
            }
        }swap(arr[i],arr[imin]);
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

    selection_sort(arr,n);

    //array after sorting
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
