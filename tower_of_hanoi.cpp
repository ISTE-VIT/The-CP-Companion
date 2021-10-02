#include <iostream>
using namespace std;
void tower_of_hanoi(int n,int A,int B,int C)
{
    if(n>0)
    {
        tower_of_hanoi(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        tower_of_hanoi(n-1,B,A,C);
    }
}
int main()
{
    int n;
    cout<<"give the number of disc :";
    cin>>n;
    int a,b,c;
    cout<<"give the tower numbers :";
    cin>>a>>b>>c;
    tower_of_hanoi(n,a,b,c);
    return 0;
}