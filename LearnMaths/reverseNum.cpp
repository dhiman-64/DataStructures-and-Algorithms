#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int revN = 0;
    while(n>0)
    {
        int digit = n%10;
        revN = revN*10+digit;
        n = n/10;
    }
    cout<<"Reversed Number is: "<<revN<<endl;
}