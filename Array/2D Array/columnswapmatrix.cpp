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
	 
	int temp,p,q;
	cout<<"\nEnter the two column with which you want to swap : \n";
	cin>>p>>q;
	  for(i=0; i<m; i++)
	 {
	 	temp=a[i][p-1];
	 	a[i][p-1]=a[i][q-1];
	 	a[i][q-1]=temp;
	 }
	 
	 
	cout<<"\nThe after swap matrix : \n";
	for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++)
	 	{
	 		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	 }
  return 0;
}




