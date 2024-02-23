#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;

    // For Loops
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    // While Loops
    int i=0;
    while(i <= n)
    {
        cout<<i<<" ";
        i++;
    }

    // do-while Loops

    do{
        cout<<i<<" ";
        i++;
    }
    while(i <=n);
}