#include<bits/stdc++.h>
using namespace std;


// Method 1 :- Iterative code  

int largestEle(int arr[] , int n)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}


// Method 2 :- Using sort technique

int largest(int arr[] , int n)
{
    sort(arr, arr+n);
    return arr[n-1];
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
    int ans = largestEle(arr,n);
    cout<<"Largest element: "<<ans<<endl;
}