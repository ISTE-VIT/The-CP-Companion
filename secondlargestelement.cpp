#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
    	cin>>array[i];

    }int max1;
    max1=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max1)
        
		{
			max1=array[i];
			
		}
    }int max2;
    max2=array[1];
    for(int i=1;i<=n;i++)
	{
		if(array[i]==max1)
		{
			continue;
		}
		else if(array[i]>max2)
		{
			max2=array[i];
		}
	}cout<<"THE SECOND LARGEST ELEMENT IS ";
	cout<<max2<<endl;
	cout<<max1;
}    
