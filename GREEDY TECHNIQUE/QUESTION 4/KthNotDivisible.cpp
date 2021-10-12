/* Making use of Binary Search, to optimize the code.
Time complexity will be O(logn)
*/


#include <bits/stdc++.h>
using namespace std;
 

void notdivisiblekth(int N, int k)
{
     
    
    int l = 1;
   
    
    int h = INT_MAX;
   
    
    int ans = 0;
 
    // Using binary search algorithm
    while (l <= h)
    {
         
        // Calculating mid value
        int mid = l+(h-l)/2;
 
       
        int result = mid - mid / N;    // result will be the value by subtracting all multiples of N till mid
 
        
        if (result > k)
        {
           
            
            h = mid - 1;
        }
       
        
       
        else if (result < k)   //  if result is less than k, then L will be mid+1
        {
            l = mid + 1;
        }
       
        
        else
        {
             
            
            ans = mid;
           
            
            h = mid - 1;
        }
    }
   
   
    cout << ans;
}
 
int main()
{   
    int N,k;
    cout<<"Enter the number N and k"<<endl;
    cin>>N>>k;
    
 
    
    notdivisiblekth(N, k);
    return 0;
}
