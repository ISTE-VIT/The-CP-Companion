
#include<iostream>
using namespace std;

int INFINITY = 999999;

void maxDC(int arr[], int n, int start, int end,int *max ){
    if(start == end){
        *max = arr[start];
        return;
    }
    else if(start +1 == end){
        if(arr[start] > arr[end]){
            *max = arr[start];
            return;
        }
        else{
            *max = arr[end];
            return;
        }
    }
    int mid = (start + end)/2;
    int max1 = (-1)*INFINITY;
    int max2 = (-1)*INFINITY;
    maxDC(arr,n,start,mid,&max1);
    maxDC(arr,n,mid+1,end,&max2);
    *max = (max1>max2) ? max1 : max2;
}

int main(){
    int arr[] = {1,4,6,8,10};
    int max = (-1)*INFINITY;
    maxDC(arr,5,0,4,&max);
    cout<<"The answer is : "<<max;
}
