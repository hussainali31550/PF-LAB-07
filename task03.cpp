#include <iostream>
using namespace std;

int frequencyChecker(int digits, int num);
main()
{

    int digits;
    int num;

    cout << "Enter your number : ";
    cin >> digits;

    cout << "Enter which number you want to see repitation : ";
    cin >> num;

    cout << frequencyChecker(digits, num);
}

int frequencyChecker(int digits, int num)
{
    int a;
    int count = 0;
    while (digits > 0)
    {
        a = digits % 10;
        if (a == num)
        {
            count = count + 1;
        }
        digits = digits / 10;
    }
    return count;
}
