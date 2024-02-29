#include<bits/stdc++.h>
using namespace std;

/*
    Method 1 :- Using Sort Technique

int secLargest(int arr[] , int n)
{
    sort(arr,arr+n);
    return arr[n-2];
}
*/


/* 
    Method 1 :- Using Double iterations 
            T(N) :- O(2N)


int largest(int arr[] , int n)
{
    sort(arr,arr+n);
    return arr[n-1];
}


int secLargest(int arr[] , int n)
{
    int maxi = largest(arr,n);
    int secMaxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > secMaxi && arr[i]!=maxi)
        {
            secMaxi = arr[i];
        }
    }
    return secMaxi;
}

*/


// Optimal Approach :- Using Single Iteration

    // T(N) = O(N)

int secLargest(int arr[] , int n)
{
    int largest = arr[0];
    int secLar = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > largest)
        {
            secLar = largest;
            largest = arr[i]
        }
        else if(arr[i] < largest && arr[i] > secLar)
        {
            secLar = arr[i];
        }
    }
    return secLar;
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
    int ans = secLargest(arr,n);
    cout<<"Second Lar: "<<ans<<endl;
}