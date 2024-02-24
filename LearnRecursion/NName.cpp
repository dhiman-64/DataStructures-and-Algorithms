#include<iostream>
using namespace std;

// Problem 1

void print(int i, int n)
{
    // Base Case
    if(i>n)
    {
        return;
    }
    cout<<"Name"<<endl;
    print(i+1,n);
}


int main()
{
    int n;
    cin>>n;
    print(1,n);
    return 0;
}