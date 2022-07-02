#include<iostream>
using namespace std;

int main()
{
	
	int i, n, a[50], max=0;
	cout<<"Enter n number:";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	
	cout<<"The Max number is "<<max;
	
 return 0;
}


