#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    getline(cin,str);

    // Pre compute
    int hash[256] = {0};
    for(int i=0 ; i<str.size() ; i++)
    {
        hash[str[i]]++;
    }

    int t;
    cin>>t;
    while(t--)
    {
        char find;
        cin>>find;
        cout<<hash[find]<<endl;
    }
    return 0;
}