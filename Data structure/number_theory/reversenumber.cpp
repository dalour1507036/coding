#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,remainder,result=0;
    cout<<"enter the number:"<<endl;
    cin>>num;
    int l=floor(log10(num))+1;
    //cout<<l;

    l=l-1;
    while(num != 0)
    {
        int r=(num%10);
        result +=(r* pow(10,l--));
        num = num/10;

    }
    cout<<"the reverse number is:"<<result<<endl;

}
