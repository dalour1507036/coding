#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,remainder;
    int result = 0;
    cout<<"enter the number:"<<endl;
    cin>>num;

    while(num != 0)
    {
       remainder =num%10;
       result+=remainder;
       num=num/10;
    }
    cout<<"some of digits are:"<<result<<endl;
}
