#include<iostream>
using namespace std;


// Infinite Loop :- Segmentation Error ( stack overflow )

void print1()
{
    cout<<1<<" ";
    print1();      
}


// Problem 2 :- With Base condition

int count = 1;
void print()
{
    if(count==5)
    {
        return;
    }
    cout<<count<<" ";
    count++;
    print();
}



int main()
{
    print();
    return 0;
}