#include <iostream>
using namespace std;

int hcf(int num1, int num2);
main()
{

    int num1, num2, obtainHCF, lcm;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    obtainHCF = hcf(num1, num2);
    lcm = (num1 * num2) / obtainHCF;
    cout << "Your H.C.F is : " << obtainHCF << endl;
    cout << "Your L.C.M is : " << lcm << endl;
}

int hcf(int num1, int num2)
{

    int a;
    int b;
    int c;
    if (num1 > num2)
    {

        a = num1 % num2;
        if (a == 0)
        {
            return num2;
        }
        b = num2 % a;
        if (b == 0)
        {
            return a;
        }
        c = a % b;
        if (c == 0)
        {
            return b;
        }
    }

    if (num2 > num1)
    {
        int a;
        int b;
        int c;
        a = num2 % num1;
        if (a == 0)
        {
            return num1;
        }
        b = num1 % a;
        if (b == 0)
        {
            return a;
        }
        c = a % b;
        if (c == 0)
        {
            return b;
        }
    }
    if (num2 == num1)
    {
        return num2;
    }
}