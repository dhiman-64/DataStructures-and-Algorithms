#include<iostream>
#include<string>
using namespace std;


int main()
{
    // Using cin Method :-
    
    string str;
    cout<<"Enter complete string: ";
    cin>>str;
    cout<<"Output using cin Method: "<<str;
    

    // Using getline Method :-

    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Output using getline Method: "<<name;

    // Methods :-
    int len = str.size();
    
}