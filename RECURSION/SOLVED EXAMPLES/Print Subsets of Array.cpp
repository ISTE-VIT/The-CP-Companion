//

#include <iostream>
using namespace std;

void printSubsetsOfArray(int input[], int size,int output[],int len) {
	if(size==0){
      for(int i=0;i<len;i++){
          cout<<output[i]<<" ";
      }cout<<endl;
        return;
    }
    printSubsetsOfArray(input+1,size-1,output,len);  
    output[len]=input[0];
    printSubsetsOfArray(input+1,size-1,output,len+1);

}

void printSubsetsOfArray(int input[], int size) {
	int output[size];
    printSubsetsOfArray(input,size,output,0);  
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}