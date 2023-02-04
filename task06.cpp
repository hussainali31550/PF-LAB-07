#include <iostream>
using namespace std;

void printPercentage(int digits);
main()
{
    int digits;

    cout << "Enter the number of digits : ";
    cin >> digits;

    printPercentage(digits);
}

void printPercentage(int digits)
{
    double   a, b, c, d, e;
    float num;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;
    float count5 = 0;

    for (int times = 1; times <= digits; times++)
    {
        cout << "Enter your numbers : ";
        cin >> num;
        if (num < 200)
        {
        
            count1=count1+1;
        }

        if (num >= 200 && num < 400)
        {
            
             count2=count2+1;
        }

        if (num >= 400 && num < 599)
        {
            
            count3=count3+1;
        }

        if (num >= 600 && num < 800)
        {
            
             count4=count4+1;
        }

        if (num >= 800)
        {
            
             count5=count5+1;
        }
    }
     a = (count1 / digits) * 100;
     
    cout << a << endl;

     b = (count2 / digits) * 100;
    
    cout << b << endl;

    c = (count3 / digits) * 100;
    
    cout << c << endl;

    d = (count4 / digits) * 100;
    
    cout << d << endl;

    e = (count5 / digits) * 100;
    
    cout << e << endl;
}
