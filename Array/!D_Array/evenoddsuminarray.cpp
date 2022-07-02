#include<iostream>
using namespace std;

int main()
{
	
	int i, n, a[50], EvenSum, OddSum;
	cout<<"Enter n number:";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	EvenSum=0, OddSum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		    EvenSum+=a[i];   //EvenSum=EvenSum+a[i];
		else
			OddSum+=a[i];    //OddSum=OddSum+a[i];
	}
	cout<<"Even sum: "<<EvenSum<<"\n";
	cout<<"Odd numbers:  "<<OddSum<<"\n";
    
 return 0;
}
