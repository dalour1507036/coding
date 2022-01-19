#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    double num,n1,n2;

    cout<<"enter the number to get sqrt:"<<endl;
    cin>>num;

    n1=num/2;
    while(1)
    {
        n2=num/n1;
        n1=(n1+n2)/2;
        if(.00001>abs(n1-n2)){break;}

    }

    cout<<n1;
}
