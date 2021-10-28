#include <bits/stdc++.h>

using namespace std;

void multiply(int x, int mult, int upto)
{
    if (mult == upto)
    {
        cout << x << " x " << mult << " = " << x * mult;
        return;
    }
    else
    {
        cout << x << " x " << mult << " = " << x * mult << endl;
        multiply(x, ++mult, upto);
    }
}

int main()
{
    int x, y;
    cin >> x;
    int upto = 10;
    multiply(x, 1, upto);
    return 0;
}