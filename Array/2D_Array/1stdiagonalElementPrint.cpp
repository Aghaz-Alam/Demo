#include<iostream>
using namespace std;
int main()
{
     int a[10][10], m, n;
	 cout<<"Enter rows and column of a matrix: \n";
	 cin>>m>>n;
	 cout<<"Enter elements of a matrix : \n";
	 for(int i=0; i<m; i++)
	 {
	 	for(int j=0; j<n; j++)
	 	{    
	 	    cin>>a[j][i];
		 }
	 }
	 
	 cout<<"\nThe matrix : \n";
	  for(int i=0; i<m; i++)
	 {
	 	for(int j=0; j<n; j++)
	 	{
	 		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	 }
	 
	cout<<"\n1st diagonal elements of the matrix : \n";
	  for(int i=0; i<m; i++)
	 {
	 	for(int j=0; j<n; j++)
	 	{
	 		if(i==j)
			 	cout<<a[i][j]<<" ";
		}
	 }
	 
  return 0;
}

