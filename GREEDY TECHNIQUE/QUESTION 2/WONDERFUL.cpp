#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
        string num; 
        cin>>num;
        ll i=0;
        while(i!=num.length())
        {
                if(num[i]=='8' && num[i+1]=='9' && num[i+2]=='9')
                i+=3;
                else if(num[i]=='8' && num[i+1]=='9')
                i+=2;
                else if(num[i]=='8')
                i+=1;
                else
                {
                        cout<<"NO\n";
                        return 0;
                }
        }
        cout<<"YES\n";
        return 0;


}

