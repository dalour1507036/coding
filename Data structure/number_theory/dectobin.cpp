#include<bits/stdc++.h>
#include<stack>

using namespace std;

void dec_to_bin(int dec)
{
    int res=dec,remainder;
    stack<int>stk;

    while(res != 0)
    {
        remainder = res%2;
        stk.push(remainder);
        res= res/2;

    }

    while(!stk.empty())
    {
        cout<<stk.top();
        stk.pop();
    }
}

int main()
{
    int dec;
    cout<<"enter the number:"<<endl;
    cin>>dec;
    dec_to_bin(dec);
}






