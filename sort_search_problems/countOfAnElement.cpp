#include<bits/stdc++.h>
using namespace std;

void total(vector<int> g1, int element)
{
    int start = 0;
    int end = g1.size() -1;
    int fir = -1;
    int las = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(element == g1.at(mid))
        {
            fir = mid;
            end =mid-1;
        }
        else if(element <= g1.at(mid))
            end = mid-1;
        else{start = mid+1;}
    }
    start = 0;
    end = g1.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(element == g1.at(mid))
        {
            las = mid;
            start = mid+1;
        }
        else if(element <= g1.at(mid))
            end = mid-1;
        else{start = mid+1;}
    }
    int res = las-fir +1;
    cout<<fir<<endl;
    cout<<las<<endl;
    cout<<res;
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
    total(g1, element);
}
