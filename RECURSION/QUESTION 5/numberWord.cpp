#include <iostream>
using namespace std;

void teen(int n)
{
    switch (n)
    {
    case 11:
        cout << "eleven ";
        break;
    case 12:
        cout << "twelve ";
        break;
    case 13:
        cout << "thirteen ";
        break;
    case 14:
        cout << "fourteen ";
        break;
    case 15:
        cout << "fifteen ";
        break;
    case 16:
        cout << "sixteen ";
        break;
    case 17:
        cout << "seventeen";
        break;
    case 18:
        cout << "eighteen ";
        break;
    case 19:
        cout << "nineteen ";
        break;
    };
}

void printWord(int n, int a)
{
    int k = n / a; // 1000
    if (k == 0)
        printWord(n % a, a / 10);
    else
    {

        if (a >= 100 || a == 1)
        {
            switch (k)
            {
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
            };

            switch (a)
            {
            case 1000:
                cout << "thousand ";
                break;
            case 100:
                cout << "hundred ";
                break;
            }
        }
        else if (a == 10)
        {
            switch (k)
            {
            case 1:
                teen(n);
                return;
                break;
            case 2:
                cout << "twenty ";
                break;
            case 3:
                cout << "thirty ";
                break;
            case 4:
                cout << "forty ";
                break;
            case 5:
                cout << "fifty ";
                break;
            case 6:
                cout << "sixty ";
                break;
            case 7:
                cout << "seventy ";
                break;
            case 8:
                cout << "eighty ";
                break;
            case 9:
                cout << "ninety ";
                break;
            };
        }
        if (n < 10 || n > 20)
            printWord(n % a, a / 10);
    }
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "Zero";
    else
        printWord(n, 1000);
    return 0;
}