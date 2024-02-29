#include<iostream>
using namespace std;


// Brute Force

bool isSorted(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] > arr[j])
            {
                return false;
            }
        }
    }
    return true;
}




// Optimal Approach :- O(N)

bool sorted(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
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
    if(isSorted(arr,n))
    {
        cout<<"Array is sorted"<<endl;
    }
    else 
    {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}