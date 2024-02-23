#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int print = 1;
    for(int i=0 ; i<n ; i++)
    {
        if(i%2 == 0) print = 1;
        else print = 0;
        for(int j=0 ; j<=i ; j++)
        {
            cout<<print;
            print = 1-print;
        }
        cout<<endl;
    }
}