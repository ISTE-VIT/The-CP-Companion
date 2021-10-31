
#include<bits/stdc++.h>
using namespace std;

int floor_find(vector<int> g1, int element)
{
    int start = 0;
    int end = g1.size() -1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(element == g1.at(mid))
        {
            return mid;
        }
        else if(element <= g1.at(mid))
         {
             res = mid;
             end = mid-1;
         }
        else{
                start = mid+1;}
    }
    return res;
}



int main()
{
    int n;
    cin>>n;
    vector<int> g1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        g1.push_back(x);
    }
    sort(g1.begin(), g1.end());
    int element;
    cin>>element;
    int mid = floor_find(g1, element);
    cout<<g1.at(mid);
}
