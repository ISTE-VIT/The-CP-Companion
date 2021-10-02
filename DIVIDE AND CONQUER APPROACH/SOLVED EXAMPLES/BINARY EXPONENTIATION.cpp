
#include<iostream>
using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
		long long a = 15, b=20;
		cout<<"The answer is : "<<binpow(a,b);
