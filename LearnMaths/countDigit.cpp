#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    while(n>0)
    {
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout<<"Total digits are: "<<count<<endl;
}