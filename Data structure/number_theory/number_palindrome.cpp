#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int num,remainder;
    cout<<"enter the number:"<<endl;
    cin>>num;
    int l = floor(log10(num))+1;
    //cout<<l;

    int *arr = new int[l];

    int i=0;
    while(num != 0)
    {
        remainder = num%10;
        arr[i++]=remainder;
        num =num/10;
    }
    //for(int k=0; k<l; k++){cout<<arr[k]<<" ";}

    int a=0;int b=l-1;
    while(a<=b)
    {
        if(arr[a] != arr[b]){cout<<"not palindrome"<<endl; return 0;}
        a++;b--;
    }
    cout<<"number is palindrome"<<endl;
}
