#include <iostream>
using namespace std;
int max(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3){
        return n1;
    }
        
    else if(n2 >= n1 && n2 >= n3){
        return n2;
    }
        
    else{
        return n3;
    }
        
}
int maxCuts(int n, int a,int b,int c)
{
    if(n==0){
        return 0;
    } 
    if(n<0){
        return -1;
    } 
    int result = max( maxCuts(n-a,a,b,c), maxCuts(n-b,a,b,c), maxCuts(n-c,a,b,c));
    if(result == -1){
       return -1; 
    } 
    return(result+1);
 }
int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxCuts(n, a, b, c);
    return 0;
}
