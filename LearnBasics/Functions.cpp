#include<bits/stdc++.h>
using namespace std;



// Function :-  
            - Pass by Value     ( make a copy of original one )
            - Pass by Reference ( use same memory using & operator )



// Arrays are always passed by reference 

void print(int arr[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
}