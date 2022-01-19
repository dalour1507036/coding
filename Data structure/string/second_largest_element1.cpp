#include<bits/stdc++.h>

using namespace std;

int second_largest(int* arr, int n)
{
    // 44 3 8 9 54 32 23
    int large1= arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>large1)
        {
            large1=arr[i];
        }
    }


    int large2=arr[0];
    for(int i=1 ; i<n; i++)
    {
        if(arr[i]>large2)
        {
            if(arr[i]==large1){continue;}

            large2 =arr[i];
        }
    }

    return large2;
}

int main()
{
    int n;
    cout<<"enter the array size:"<<endl;
    cin>>n;

    int* arr = new int(n);
    for(int i=0 ; i<n; i++)
    {
        cin>>arr[i];
    }


    int second_large = second_largest(arr,n);

    cout<<"the second largest element is:"<<second_large<<endl;
}
