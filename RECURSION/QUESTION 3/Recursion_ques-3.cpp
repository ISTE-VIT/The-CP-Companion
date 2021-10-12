#include<iostream>
using namespace std;

void multiplication(int num, int count)
{
    //Base case
    if(count>10)
    return;

    //Print
    cout<<num<<" * "<<count<<" = "<<num*count<<endl;
    //Function call
    multiplication(num,count+1);

    return;
}

int main()
{
    //Enter Number
    int num;
    cin>>num;
    //Recursive function
    multiplication(num,1);
    return 0;
}
