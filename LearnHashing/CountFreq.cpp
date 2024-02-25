#include<bits/stdc++.h>
using namespace std;


// Brute Force :- Using for loops
int totalOcc(int arr[], int n, int target)
{
    int count = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    return count;
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
    int target;
    cin>>target;
    int ans = totalOcc(arr,n,target);
    cout<<"Value occurs: "<<ans<<" times";
}