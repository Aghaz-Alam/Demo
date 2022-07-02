//program to search any element in an array.
#include<iostream>
using namespace std;

int main()
{
	int n,a[10], i, num,count=0, pos;
	cout<<"Enter the range: \n";
	cin>>n;
	cout<<"\nEnter elements of Array: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the elemnt that you want to search from the array elements: \n";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			count++;
			pos++;
			break;
		}	
	}
	
	if(count==0)
		cout<<"\nElement in the array was not found.";
	else
		cout<<"\nElement of the array "<<num<<" at position: "<<pos+1;
		
  return 0;
}