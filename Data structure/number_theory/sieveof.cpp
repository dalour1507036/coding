#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout<<"enter the number:"<<endl;
    cin>>n;

    int *arr =new int[n+1];

    for(int i=0; i<n; i++)
    {//if array value is 1 then it is prime
        arr[i]=1;

    }

    //0 and 1 is not prime always
    arr[0]=0;
    arr[1]=0;

    for(int i=2; i*i<=n; i++)
    {
        if(arr[i]==1)
        {
            for(int k=2; i*k<n; k++)
            {
                arr[i*k]=0;
            }
        }
    }


    cout<<"primes numbers are:"<<endl;
    for(int i=0; i<n+1; i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<endl;
        }
    }
}
