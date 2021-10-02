/*

Solution of Recursion question 3 in C++
By: Shourya Gupta

*/
#include <iostream>
using namespace std;
void multiply(int n,int temp){

    cout<<n<<" x "<<temp<<" = "<<n*temp<<endl;
    temp++;
    if (temp<=10){
        multiply(n, temp);
    }
}
int main()
{
    int num,temp=1;
    cin>>num;
    multiply(num,temp);
}
