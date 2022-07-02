#include<iostream>
using namespace std;
int main()
{
     int a[10][10], b[10][10],c[10][10], i, j, m, n;
	 cout<<"Enter rows and column of a matrix: \n";
	 cin>>m>>n;
	 cout<<"Enter elements of matrix A: \n";
	 for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cin>>a[i][j];
		 }
	 }
	 
	 cout<<"Enter elements of matrix B: \n";
	 for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cin>>b[i][j];
		}
	 }
	 
	cout<<"\nThe matrix A: \n";
	  for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	 }
	 
	cout<<"\nThe matrix B: \n";
	  for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	 }
	 
	 // Addition of Matrix A and Matrix B and stored in Matrix C.
	  for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		c[i][j]=a[i][j]-b[i][j];
		 }
	 }
	 
	 
	 cout<<"\nSubtraction of the matrix: \n";
	  for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	 }
	 
	
  return 0;
	 
}