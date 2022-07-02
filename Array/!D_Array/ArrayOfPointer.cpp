#include<iostream>
using namespace std;

int main()
{
  int *ar[3];

  int a=4;
  int b=5;
  int c=6;

  ar[0]=&a;
  ar[1]=&b;
  ar[2]=&c;

  cout<<"Elements of Array: \n";
  for(int i=0; i<3; i++)
  {
   cout<<*ar[i]<<endl;
  }
  return 0;
}

    