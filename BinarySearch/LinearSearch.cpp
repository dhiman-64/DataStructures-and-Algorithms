#include<iostream>
using namespace std;


void linearSearch(int arr[] , int n, int target)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == target)
        {
            cout<<"Found at index: "<<i<<endl;
        }
        else
        {
            cout<<"Doesn't Exist"<<endl;
            break;
        }
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
    int target;
    cout<<"Search:- ";
    cin>>target;
    linearSearch(arr,n,target);
}