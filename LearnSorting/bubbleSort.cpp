#include<iostream>
using namespace std;


/*
    Push the maximum to the last by adjacent Swaps

    T(N) = O(N)  {Best}
    T(N) :- O(N^2) {Avg, Worst}
    S(N) :- O(1)

*/


void bubbleSort(int arr[], int n)
{
    for(int i=n-1 ; i>=1 ; i--)
    {
        int didSwap = 0;
        for(int j=0 ; j<=i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
        cout<<"Runs\n";
    }
}


void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"After Sorting: ";
    print(arr,n);

    return 0;
}