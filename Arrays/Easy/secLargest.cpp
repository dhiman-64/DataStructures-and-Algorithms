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