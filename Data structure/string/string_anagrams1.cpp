#include<bits/stdc++.h>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    string str1,str2;
    cout<<"enter the two strings to check if the aragrams of each other:"<<endl;
    getline(cin,str1);
    getline(cin,str2);

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    int c= str1.compare(str2);
    if(c==0)
    {
        cout<<"strings of anagrams of each other"<<endl;
    }
    else
    {
        cout<<"strings are not anagrams"<<endl;
    }
}
