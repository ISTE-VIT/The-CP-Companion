#include<iostream>
using namespace std;

void multipl(int n,int c)
{
    if(c>10)
    {
        return;
    }
    cout<<n<<" * "<<c<<" = "<<n*c<<endl;
    multipl(n,c=c+1);
    return;
}

int main()
{
    int n;
    cin>>n;
    multipl(n,1);
    return 0;
}
