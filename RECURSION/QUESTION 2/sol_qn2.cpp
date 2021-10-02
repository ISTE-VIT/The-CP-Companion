#include<iostream>
using namespace std;

void lazy(int n,int c,int d)
{
    if(c==2*d)
    {
        cout<<n<<' ';
        return;
    }
    if(n>0 && c<d)
    {
        cout<<n<<' ';
        lazy(n=n-1,c=c+1,d);
    }else{
        cout<<n<<' ';
        lazy(n=n+1,c=c+1,d);
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    lazy(n,0,n);
    return 0;
}
