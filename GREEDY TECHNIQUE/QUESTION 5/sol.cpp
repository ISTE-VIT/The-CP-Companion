#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(), greater<int> ());
    int negindex = -1;
    for(int i= 0;i<v.size();i++)
    {
        if(v[i]<0)
        {
            negindex = i;
            break;
        }
    }
    if(negindex==-1)
    {
        cout<<(v[0]*v[1]*v[2]*v[3]*v[4]);
        return 0;
    }
    if(negindex>=n-3)
    {
        cout<<max(v[0]*v[1]*v[2]*v[3]*v[4], v[0]*v[1]*v[2]*v[n-1]*v[n-2]);
        return 0;
    }
    if(negindex>=n-4)
    {
        cout<<max(v[0]*v[1]*v[2]*v[3]*v[4], max(v[0]*v[1]*v[2]*v[n-1]*v[n-2], v[0]*v[n-1]*v[n-2]*v[n-3]*v[n-4]));
    }
    return 0;
}