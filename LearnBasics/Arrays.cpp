#include<iostream>
using namespace std;


int main()
{
    // Basic Array :- Input/ Output
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    


    // Basic 2D Array

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Example :- 3 5
                50 60 70 75 80
                90 80 75 60 50 
                10 20 30 40 45

}