#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    //double res = sqrt(n);

    for(int i=2; i*i<=n;i++)
    {
        if(n%i==0){cout<<"not prime"<<endl; return 0;}
    }


    cout<<"prime";
}
