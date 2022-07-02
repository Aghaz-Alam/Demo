#include<iostream>
using namespace std;

int main()
{
	
	int i, n, a[50], min;
	cout<<"Enter n number:";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	
	cout<<"The Minimum number is "<<min;
	
 return 0;
}
