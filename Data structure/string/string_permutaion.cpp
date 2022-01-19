#include<bits/stdc++.h>
#include<string>

using namespace std;


void string_permutation(string str, int l, int r)
{
    if(l==r){cout<<str<<endl;}
    else{

        for(int i=l; i<=r; i++)
        {
            swap(str[l],str[i]);
            //recursion
            string_permutation(str,l+1,r);
            //backtrack
            swap(str[l],str[i]);
        }

       }
}


int main()
{
    string str;
    cout<<"enter the string to get permutations:"<<endl;
    getline(cin,str);
    cout<<endl<<"results are:"<<endl;
    string_permutation(str,0,str.size()-1);
}
