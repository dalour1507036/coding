#include<bits/stdc++.h>
#include<string>

using namespace std;

void duplicate_chars(string str)
{
    int hash_table[26]={0};
    for(int i=0; i<str.size();i++)
    {
        if((int)(str[i])>=(int)('a') && (int)(str[i])<=(int)('z'))
        {
            hash_table[(int)(str[i])-(int)('a')]+=1;
        }
         else if((int)(str[i])>=(int)('A') && (int)(str[i])<=(int)('Z'))
        {
            hash_table[(int)(str[i])-(int)('A')]+=1;
        }
    }

    cout<<"duplicate characters are:"<<endl;
    for(int i=0; i<26; i++)
    {
        if(hash_table[i]>1)
        {
            cout<<(char)((int)('a')+i)<<" "<<hash_table[i]<<endl;
        }
    }

}

int main()
{
    string str;
    cout<<"enter the string:"<<endl;

    getline(cin,str);
    duplicate_chars(str);

}
