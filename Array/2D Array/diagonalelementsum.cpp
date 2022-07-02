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
	 
	 
	int sum1=0;
	int sum2=0;
	
	for(i=0; i<m; i++)
	 {
			 	sum1+=a[i][i];
				sum2+=a[i][m-i-1];		 
	}
	 cout<<"\n1st diagonal element sum: "<<sum1<<"\n";
	 cout<<"2nd diagonal element sum: "<<sum2<<"\n";
	 
	cout<<"\n\nSum of 1st + 2nd diagonal elements of the matrix : "<<sum1+sum2;
	 
  return 0;
}

