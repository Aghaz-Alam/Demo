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
	 
	 
	cout<<"\nAlternate Elelments of Matrix  : \n";
	  for(i=0; i<m; i++)
	 {
	 	
		for(j=0; j<n; j++)
	 	{
	 		if( i==1 || j==1)
	 			cout<<a[i][j];
	 		else
	 		    cout<<"   ";
	 			
		}
		cout<<"\n"<<"  ";
	 }
	 
  return 0;
}