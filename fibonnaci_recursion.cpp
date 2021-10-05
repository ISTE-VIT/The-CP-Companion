#include <iostream>
using namespace std;
int fibo(int x)
{
   if((x==1)||(x==0))
   {
      return(x);
   }
  else
  {
      return(fibo(x-1)+fibo(x-2));
   }
}
int main() {
   int x , i;
   cout << "Enter the number of terms of series to be printed: ";
   cin >> x;
   cout << "\n Fibonnaci Series is: ";
   for(i=0;i < x;i++) 
   {
      cout << " " << fibo(i);
   }
   return 0;
}
