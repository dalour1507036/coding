#include<bits/stdc++.h>
#include<string>

using namespace std;

void nonrepeated_1st(string str)
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

    cout<<"1st non repeated character is:"<<endl;
    for(int i=0; i<str.size();i++)
    {
        if((int)(str[i])>=(int)('a') && (int)(str[i])<=(int)('z'))
        {
            if(hash_table[(int)(str[i])-(int)('a')]==1){cout<<str[i];return;}
        }
         else if((int)(str[i])>=(int)('A') && (int)(str[i])<=(int)('Z'))
        {
            if(hash_table[(int)(str[i])-(int)('A')]==1){cout<<str[i];return;}
        }
    }


}
int  main()
{
    string str;
    cout<<"enter the string:"<<endl;

    getline(cin,str);
    nonrepeated_1st(str);

}

