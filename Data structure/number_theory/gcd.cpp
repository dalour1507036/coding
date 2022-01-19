#include<bits/stdc++.h>


using namespace std;

int main()
{
    int vjjo,vjok,remainder,a,b;
    cout<<"enter two number to get gcd:"<<endl;
    cin>>a;
    cin>>b;
    if(a>b){vjjo=a;vjok=b;}
    else{vjjo=b;vjok=a;}

    while(vjok != 0)
    {
    remainder = vjjo%vjok;
    vjjo=vjok;
    vjok=remainder;
    }
      cout<<vjjo;
}
