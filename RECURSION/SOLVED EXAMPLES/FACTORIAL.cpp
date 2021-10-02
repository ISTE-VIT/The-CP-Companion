#include <iostream>
using namespace std;

// function to find factorial of given number
long long factorial(long long n)
{
 if (n == 1) // Base case
  return 1;
 return n * factorial(n - 1);
}

int main()
{
 int num = 5;
 cout << "Factorial of "<< num << " is " << factorial(num) << endl;
 return 0;
 }
