#include<iostream>
using namespace std;




// Parameterized Way
void sumN(int i, int sum )
{
    // Base case
    if(i<1)
    {
       cout<<sum;
       return;
    }
    sumN(i-1, sum+i);
}


// Functional Recursion
int sumM(int n)
{
    // Base case
    if(n<0)
    {
        return 0;
    }
    return n+sumM(n-1);
}


int main()
{
    int n;
    cin>>n;
    sumN(n,0);
    cout<<endl;
    cout<<sumM(n);

    return 0;
}