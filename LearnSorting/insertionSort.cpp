#include<iostream>
using namespace std;


/*
    Takes an element & places it in its correct order

    T(N) :- O(N) { BEST }
    T(N) = O(N^2)  {ANG, WORST}
    S(N) :- O(1)

*/


void insertionSort(int arr[] , int n)
{
    for(int i=0 ; i<=n-1 ; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {   
            swap(arr[j-1], arr[j]);
            j--;
        }
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
    insertionSort(arr,n);
    cout<<"After Sorting: ";
    print(arr,n);

    return 0;
}