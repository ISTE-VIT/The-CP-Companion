#include <iostream>

using namespace std;
int flag = 1;
void recursive(int &n, int m)
{
    if (n == 0)
        flag = 0;
    if (n <= m)
    {
        cout << n << " ";
        if (flag)
            recursive(--n, m);
        else
            recursive(++n, m);
    }
}

int main()
{
    int n;
    cin >> n;
    recursive(n, n);
    return 0;
}