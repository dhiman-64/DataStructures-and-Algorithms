#include<iostream>
using namespace std;

int main()
{
    // Problem 1
    
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age >= 18)
    {
        cout<<"You are Adult";
    }
    else
    {
        cout<<"Not Adult";
    }
    
    // Problem 2

    int marks;
    cin>>marks;
    if(marks >=80 && marks <=100)
    {
        cout<<"A";
    }
    else if(marks>=60 && marks<=79)
    {
        cout<<"B";
    }
    else if(marks>=50 && marks<=59)
    {
        cout<<"C";
    }
    else if(marks>=45 && marks<=49)
    {
        cout<<"D";
    }
    else if(marks>=25 && marks<=44)
    {
        cout<<"E";
    }
    else
    {
        cout<<"F";
    }
    

    // Problem 3

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age < 18)
    {
        cout<<"You are not eligible for job";
    }
    else
    {
        if(age >=18 && age <=54)
        {
            cout<<"Eligible for job";
        }
        else if(age >=55 && age<=57)
        {
            cout<<"Eligible for job, but retirement soon";
        }
        else if(age > 57)
        {
            cout<<"Retirement time";
        }
    }
}