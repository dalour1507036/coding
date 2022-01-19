#include<bits/stdc++.h>

using namespace std;

int largest_element(int* arr, int n)
{
    int large_element = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>large_element)
        {
            large_element = arr[i];
        }
    }

    return large_element;
}

int smallest_element(int* arr, int n)
{
    int small_element = arr[0];
    for(int i=1; i<n; i++ )
    {
        if(arr[i]<small_element)
        {
            small_element = arr[i];
        }
    }

    return small_element;
}

int main()
{
    int n;
    cout<<"enter the array size:"<<endl;
    cin>>n;

    int* arr = new int(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int large_element = largest_element(arr,n);

    cout<<large_element<<endl;

    int small_element = smallest_element(arr,n);
    cout<<small_element<<endl;


}
