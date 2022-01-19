#include<bits/stdc++.h>

using namespace std;

int main()
{
    double num;
    cout<<"enter the number:"<<endl;
    cin>>num;

    while( num != 0)
    {
        num=num/2.0;
        if(num==1.0){cout<<"this number is exponent of 2"<<endl; return 0;}
    }cout<<"this is not exponent of 2"<<endl;
}
