#include<bits/stdc++.h>
using namespace std;


// Reverse a String

void revS(string &str, int start, int end)
{
   if(start>end)
   {
    return;
   } 
   swap(str[start], str[end]);
   revS(str,start+1,end-1);
}


string isPal(string str)
{
    int n = str.length();
    string original = str;
    revS(str,0,n-1);

    if(str == original)
    {
        return "Yes, it's palindrome.";
    }
    else
    {
        return "No, it's not a palindrome.";
    }
}


int main()
{
    string str;
    cin>>str;
    cout<<"Original string is: "<<str<<endl;
    int n = str.length();
    revS(str,0,n-1);
    cout<<"Reversed string is: "<<str<<endl;

    cout<<isPal(str);

    return 0;
}