#include <iostream>
#include <string>
#include <vector>
#include <numeric>  
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int a,mx,sum;
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
    mx=*max_element(v.begin(),v.end());
    sum=accumulate(v.begin(),v.end(),0)-mx;
    cout<<sum/(float)(v.size()-1)+mx<<endl;            
    
}
