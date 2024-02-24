#include<iostream>
using namespace std;


// Problem 1

void print1toN(int i, int n)
{
    // Base Case
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    print1toN(i+1,n);
}


// Problem 2

void printNto1(int n)
{
    // Base Case
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printNto1(n-1);
}


int main()
{
    int n;
    cin>>n;
    print1toN(1,n);
    printNto1(n);
    return 0;
}