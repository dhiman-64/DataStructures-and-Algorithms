#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int len = log10(n)+1;
    int original = n;
    int sum = 0;
    while(n>0)
    {
        int digit = n%10;
        sum = sum+pow(digit,len);
        n = n/10;
    }
    if(original == sum)
    {
        cout<<"Yes, it's Armstrong Number."<<endl;
    }
    else
    {
        cout<<"Nope, It's not a armstrong number."<<endl;
    }
}