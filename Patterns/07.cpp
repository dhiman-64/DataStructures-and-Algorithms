#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Spacing
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        

        // Pattern
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}