#include <iostream>
using namespace std;

void printLazy(int n, int max, int& flag){
    if(n<=max){
        if(n==0) flag = 1;
        if(flag==0){
            cout << n << " ";
            printLazy(n-1, max, flag);
        }
        else if(flag == 1){
            cout << n << " ";
            printLazy(n+1, max, flag);

        }
    }
}

int main(){
    int n = 0;
    cin>>n;
    int flag = 0;
    printLazy(n, n, flag);
}