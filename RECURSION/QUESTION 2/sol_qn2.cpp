#include<iostream>

using namespace std;

void lazyNumbers(int n) {
    if(n==0) {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    lazyNumbers(n-1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    lazyNumbers(n);

    return 0;
}
