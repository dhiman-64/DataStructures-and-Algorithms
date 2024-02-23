#include<iostream>
using namespace std;


void pattern1(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        // Pattern
        for(int j=1 ; j<=i ; j++)
        {
            cout<<j;
        }

        // Spacing
        for(int j=1 ; j<=2*n-(2*i) ; j++)
        {
            cout<<" ";
        }

        // Pattern
        for(int j=i ; j>=1 ; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    pattern1(n);

    return 0;
}