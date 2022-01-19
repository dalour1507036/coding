#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout<<"enter the string for palindrome check:"<<endl;

    getline(cin,str);

    int i=0;
    int j=str.size()-1;

    while(i<=j)
    {
        if(str[i] != str[j])
        {
            cout<<"not palindrome"<<endl;
            return 0;
        }
        i++;
        j--;
    }

    cout<<"palindrome string"<<endl;
}
