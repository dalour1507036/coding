#include<bits/stdc++.h>

using namespace std;

void digits_string(string str)
{
    int flag=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==' '){continue;}
        if((int)(str[i])<(int)('0') || (int)(str[i])>(int)('9') ){flag=1;}

    }

    if(flag==0){cout<<"contains only digits"<<endl;}
    else{cout<<"contains other chars also"<<endl;}
}


int main()
{
    string str;
    cout<<"enter the string to check if it only contains digits:"<<endl;
    getline(cin,str);
    digits_string(str);
}
