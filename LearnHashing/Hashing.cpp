#include<iostream>
using namespace std;


/*
    Hashing :- Globally declare = 1e7
               Inside main = 1e6
*/


// int hash[1e7];       Globally declared
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    // Precompute
    int hash[100] = {0};
    for(int i=0 ; i<n ; i++)
    {
        hash[arr[i]] +=1;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int target;
        cin>>target;

        // Fetching
        cout<<"Value of "<<target<<" occurs: "<<hash[target]<<" times"<<endl;

    }
    return 0;
}