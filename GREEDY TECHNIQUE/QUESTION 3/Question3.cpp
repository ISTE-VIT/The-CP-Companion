#include <iostream>
#include <string>
#include <vector>
#include <numeric>  
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int a;
    string s, temp="";
    getline(cin,s);
    for(int i=1;i<s.length();i++) 
    {
        if(s[i]==',' || s[i]==']')
        {
            
            a=stoi(temp);
            v.push_back(a);
            temp="";
            i++;
        }
        else  
            temp+=s[i];
    }
    int length=v.size();
    int extra=accumulate(v.begin(), v.end(),0)%length;
    cout<<max(length-extra,extra)<<endl;            
    
}
