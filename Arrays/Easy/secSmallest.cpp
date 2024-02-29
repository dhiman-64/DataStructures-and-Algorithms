#include<bits/stdc++.h>
using namespace std;


int smallest(int arr[], int n)
{
    sort(arr,arr+n);
    return arr[0];
}


int secSmallest(int arr[], int n)
{
        int mini = smallest(arr,n);
        int secMini = INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i] != mini && arr[i] < secMini)
            {
                secMini = arr[i];
            }
        }
    
    return secMini;
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
    int ans = secSmallest(arr,n);
    cout<<"Second Smallest: "<<ans<<endl;
}