#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int hash_table[26]={0};//initialize  with zero
    string str;
    cout<<"enter the string :"<<endl;

    getline(cin,str);

    for(int i=0; i<str.size(); i++)
    {
        if( ((int)(str[i])>=65) &&  ((int)(str[i])<=90) )
        {
            hash_table[(int)(str[i])-65]++;
        }
        else if( ((int)(str[i])>=97) && ((int)(str[i])<=122) )
        {
            hash_table[(int)(str[i])-97]++;
        }


    }

    for(int i=0 ;i<26; i++)
    {
        if(hash_table[i]>0)
        {
            cout<<(char)(i+97)<<"->"<<hash_table[i]<<endl;
        }
    }
}
