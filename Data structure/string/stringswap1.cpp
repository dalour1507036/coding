#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

void swap_string(char* str1, char* str2);

void swap_string(char* str1, char* str2)
{
    char* temp = str1;
    str1 = str2;
    str2 = temp;

}

int main()
{
    int i;
    cout<<"enter the size of first string: ";
    cin>>i;
    char* str1 = new char[i];
    for(int k=0; k<i; k++)
    {
        cin>>str1[k];
    }cout<<endl;

    int j;
    cout<<"enter the size of second string: ";
    cin>>j;
    char* str2 = new char[j];
    for(int l=0; l<j; l++)
    {
        cin>>str2[l];
    }cout<<endl;


    swap_string(str1,str2);

    cout<<"string one is:"<<endl;
      for(int l=0; l<j; l++)
    {
        cout<<str2[l];
    }cout<<endl;

     cout<<"string two is:"<<endl;
      for(int k=0; k<i; k++)
    {
        cout<<str1[k];
    }cout<<endl;



}

