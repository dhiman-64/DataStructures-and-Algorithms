#include<iostream>
using namespace std;


/*
    Select the minimum & swap it. ( Simple )

   T(N) :- O(N^2)  {Best, Avg, Worst}
   S(N) :- O(1)

*/



void selection(int arr[] , int n)
{
    for(int i=0 ; i<=n-2 ; i++)
    {
        int minIndex = i;
        for(int j=i ; j<=n-1 ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swapping
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


void print(int arr[], int n)
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
    selection(arr,n);
    cout<<"After Sorting: ";
    print(arr,n);

    return 0;
}