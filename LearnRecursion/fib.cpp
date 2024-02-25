#include<iostream>
using namespace std;


/*
                            Recursive Way :- T(N) = O(2^n)
                                             S(N) = O(N)

*/


int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}





/*
                            Most Optimized Way :-   T(N) - O(N)
                                                    S(N) - O(1)
*/

int main()
{
    int n;
    cin>>n;
    if(n == 0)
    {
        cout<<0;
    }
    else
    {
        int a = 0;
        int b = 1;
        cout<<a<<" "<<b<<" ";
        int whichOne;
        for(int i=2 ; i<=n ; i++)
        {
            whichOne = a+b;
            a = b;
            b = whichOne;
            cout<<whichOne<<" ";
        }
    }
}