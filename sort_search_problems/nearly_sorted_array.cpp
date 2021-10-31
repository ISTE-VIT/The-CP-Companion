#include<bits/stdc++.h>
using namespace std;

// i --> i || i+1  || i-1

int nearly_sorted(vector<int> g1, int element)
{
    int start = 0;
    int end = g1.size() -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(element == g1.at(mid))
        {
            return mid;
        }
        else if(mid-1>=start && element == g1.at(mid-1))
            return mid-1;
        else if(mid+1<=end && element == g1.at(mid+1))
            return mid+1;
        else if(element <= g1.at(mid))
            end = mid-1;
        else{start = mid+1;}
    }
    return -1;
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
    cout<<nearly_sorted(g1, element);
}
