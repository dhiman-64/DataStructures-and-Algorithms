#include<iostream>
using namespace std;



// Method 1 :- Using Two Pointer Technique
void revArr(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}



// Method 2 :- Using in-build STL
void revArr(int arr[], int n)
{
    reverse(arr,arr+n);
}



// Method 3 : Using Recursion
void revArr(int arr[], int start, int end)
{
    // Base case
    if(start<end)
    {
        swap(arr[start] , arr[end]);
        return revArr(arr,start+1,end-1);
    }
}



// Method 4 :- Using recursion but only 1 Pointer
void revArr(int i, int arr[] , int n)
{
    // Base case
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i] , arr[n-i-1]);
    revArr(i+1, arr, n);
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
    revArr(arr,0,n-1);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}