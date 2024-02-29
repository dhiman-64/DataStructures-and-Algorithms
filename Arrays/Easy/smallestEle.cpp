#include<iostream>
using namespace std;


int smallestEle(int arr[], int n)
{
    int mini = arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
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
    int ans = smallestEle(arr,n);
    cout<<"Smallest element: "<<ans<<endl;
}