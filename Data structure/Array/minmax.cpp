#include<bits/stdc++.h>

using namespace std;

int min_max(int* arr, int flag,int n)
{

    if(flag==1)//for the largest element
    {
        int m_ax=arr[0];
        for(int i=1; i<n;i++)
        {
            if(arr[i]>m_ax)
            {
                m_ax=arr[i];
            }
        }return m_ax;


    }else{//for the smalles element

         int m_in=arr[0];
        for(int i=1; i<n;i++)
        {
            if(arr[i]<m_in)
            {
                m_in=arr[i];
            }
        }return m_in;

    }
}


int main()
{
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int smallest = min_max(arr,0,n);
    int largest = min_max(arr,1,n);

    cout<<"max is:"<<largest<<"and min is:"<<smallest<<endl;
}
