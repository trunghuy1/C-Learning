

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input n: ";
    cin >> n;
    int div = n % 2;
    switch (div)
    {
    case 0:
        cout << "n la chan";
        break;
    default:
        cout << "n la le";
        break;
    }
}


