#include <iostream>
using namespace std;

int totalDigits(int digits);
main()
{
    int digits;

    cout << "Enter your number : ";
    cin >> digits;

    cout << totalDigits(digits);
}

int totalDigits(int digits)
{
    int count = 0;
    while (digits > 0)
    {
        digits = digits / 10;
        count = count + 1;
    }
    return count;
}
