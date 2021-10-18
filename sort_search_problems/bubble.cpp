#include<iostream>
using namespace std;
int main(){
int n;
cout<< "enter the no of elements in array:";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];}
for(int i=0;i<n;i++){
   int min=a[i];
   for(int j=0;j<n;j++){
      if(a[j]>min){
        int  min=a[j];
         int temp=a[j];
         a[j]=a[i];
         a[i]=temp;}}}
cout<<"sorted list is as:\n";
for(int i=0;i<n;i++){
   cout<<a[i]<<"\n";}
}
