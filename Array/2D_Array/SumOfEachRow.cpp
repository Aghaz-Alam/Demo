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
	 
	 
	cout<<"\nSum of each row of the matrix : \n";
	  for(i=0; i<m; i++)
	 {
	 	 int sum=0;
		 for(j=0; j<n; j++)
	 	{
	 		sum+=a[i][j];
		}
		cout<<"Row "<<i<<":"<<sum<<"\n";
	 }
	 
  return 0;
}