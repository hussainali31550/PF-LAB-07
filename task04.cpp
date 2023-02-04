#include <iostream>
using namespace std;

int digitSum(int digits);
main()
{

    int digits;
    

    cout << "Enter your number : ";
    cin >> digits;

    cout << digitSum(digits);
}

int digitSum(int digits)

{
    int a;
    int sum = 0;
    while (digits > 0)
    {
        a = digits % 10;
        
        
            sum= sum  + a;
        digits = digits /10;
    }
    return sum;
}
