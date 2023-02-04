#include <iostream>
using namespace std;

float calculateMoney(int age, int Wprice, int Tprice);
main()
{

    int age, Wprice, Tprice;
    float finalResult;

    cout << "Enter age of Lily : ";
    cin >> age;
    cout << "Enter Price of washing machine : ";
    cin >> Wprice;
    cout << "Enter Price of toy : ";
    cin >> Tprice;

    finalResult = calculateMoney( age,  Wprice,  Tprice);
    if (finalResult >= 0)
    {
        cout << "Yes! You have extra money left : " << finalResult;
    }
    if (finalResult < 0)
    {
        cout << "No! You need  : " << finalResult;
    }
}

float calculateMoney(int age, int Wprice, int Tprice)
{
    float moneySum = 0;
    float toySum = 0;
    float total;

    for (int counter = 0; counter <= age; counter = counter + 2)
    {
        moneySum = moneySum + (10 - 1);
    }
    for (int counter = 1; counter <= age; counter = counter + 2)
    {
        toySum = toySum + 6;
    }
    total = moneySum + toySum;
    return total;
}