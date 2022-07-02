#include<iostream>
using namespace std;

int main()
{
	
	int i, n, a[50];
	cout<<"Enter n number:";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			cout<<"\n"<<a[i]<<" ";
			
	}
 return 0;
}
