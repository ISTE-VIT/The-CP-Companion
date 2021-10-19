#include<bits/stdc++.h>
#define ui int 
using namespace std;

int main()
{
    int t  ;
    cin >> t ;
    while(t--)
    {
        ui x , n  ; 
    
        cin >>n ;
        ui temp1 , temp2 ;
        ui max1 = INT_MIN, max2 = INT_MIN;
        ui min1 = INT_MAX, min2 = INT_MAX;
        for(ui i =0 ;i<n ;i++)
        {
        cin>>x ;
        
        temp1 = x+i ;
        temp2= x-i ;
        max1 = max(max1 , temp1) ;
        min1 = min(min1 , temp1);

        max2 = max(max2 , temp2 );
        min2 = min(min2 , temp2);
        }

        cout<<max(max1-min1 , max2-min2)<<"\n" ;
   
    }

return 0;
}