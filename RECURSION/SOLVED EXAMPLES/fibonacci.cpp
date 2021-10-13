#include<iostream>
using namespace std;

int febonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n>1){
        return febonacci(n-1)+febonacci(n-2);
    }

    return -1;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    cout<<"The Sequence : ";
    for (int i = 0; i <n; i++)
    {
        cout<<febonacci(i)<<" ";
    }
    
    cout<<endl;

    return 0;
}