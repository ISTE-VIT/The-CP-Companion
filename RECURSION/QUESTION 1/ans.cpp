#include<iostream>
#include<string>
using namespace std;
string reverse(string &s,int i,int j)
{
    if(j<=i)
    {
        return s;
    }
    swap(s[i],s[j]);
    reverse(s,i=i+1,j=j-1);
    return s;
}
int main()
{
    string s;
    cin>>s;
   // int n=0;
    int i=0,j=s.length()-1;
    cout<<reverse(s,i,j)<<endl;
    return 0;
}