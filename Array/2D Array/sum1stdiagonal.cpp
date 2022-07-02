#include<iostream>
using namespace std;
int main()
{
     int a[10][10], i, j, m, n;
	 cout<<"Enter rows and column of a matrix: \n";
	 cin>>m>>n;
	 cout<<"Enter elements ofa matrix : \n";
	 for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{    
	 	    cin>>a[j][i];
		 }
	 }
	 
	 cout<<"\nThe matrix : \n";
	  for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	 }
	 
	 cout<<"\n1st diagonal elements of the matrix : ";
	for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		if(i==j)
			 	cout<<a[i][j];		 
		}
	 }
	 
	int sum=0;
	cout<<"\n\nSum of 1st diagonal elements of the matrix : ";
	for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		if(i==j)
			 	sum+=a[i][j];		 
		}
	}
	 cout<<sum;
	 
  return 0;
}

