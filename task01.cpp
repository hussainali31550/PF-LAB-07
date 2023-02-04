#include <iostream>
using namespace std;

void series(int times);
main()
{
    int times;

    cout << "How many series you want : ";
    cin >> times;

    series(times);
}

void series(int times)
{
    int num1 = 0;
    int num2 = 1;
    int next;
    cout << num1 << " , ";
    cout << num2 << " , ";

    for (int count = 1; count <= times - 2; count = count + 1)
    {
        next = num1 + num2;
        cout << next << " , ";
        num1 = num2;
        num2 = next;
    }
}