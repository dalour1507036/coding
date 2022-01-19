#include<bits/stdc++.h>

using namespace std;

void reverse_recursion(string str, int g, int h )
{
    if(g>h){cout<<str; return;}
    swap(str[g],str[h]);
    reverse_recursion(str,g+1,h-1);
}

int main()
{
    string str;
    cout<<"enter the string to reverse:"<<endl;
    getline(cin,str);
    reverse_recursion(str,0,str.size()-1);

}
