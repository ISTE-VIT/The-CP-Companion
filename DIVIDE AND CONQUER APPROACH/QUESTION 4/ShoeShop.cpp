#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb(x) push_back(x)
#define FOR(i,k,n) for ( int i=k; i<n; i++ )

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int BS(vi &a)
{
    int l=0,r=a.size()+1;
    r>>=1;                              // We will only iterate one element per pair : the left element of the pair
    while(l<r)                                             
    {
        int mid=(l+r)>>1;
        mid<<=1;
        if (mid-1>0 || mid+1<a.size())
        {
            int c=0;
            if ( mid-1>0 )
                c+= a[mid-1]!=a[mid];
            else c++;

            if ( mid+1<a.size() )
                c+= a[mid+1]!=a[mid];
            else c++;

            if ( c==2 )                   // c==2 if no elemnts on either side are equal to it
                return a[mid];
        }
        if (mid-1>0 && a[mid-1]==a[mid])   // Because we are always iterating the left element, the right element must be equal 
            r=mid/2;                       // to the current value, if the shoe pairs are complete before the mid index.
        else                               // If somehow we shift to the right pair, we know there is a disturbance in between
            l=(mid+2)/2;                   // Hence, if we are on left pair - left is set to mid/2+1 (Everything normal before mid)
    }
    return -1;
}

int main(){

    int n;      // Size of array
    cin>>n;

    vi a(n);
    FOR(i,0,n)
        cin>>a[i]; //Elements

    cout<<BS(a);
}