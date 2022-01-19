#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter the two numbers:"<<endl;
    cin>>a>>b;

    int c=(a^b)^((a&b)<<1);
    cout<<c;

}
