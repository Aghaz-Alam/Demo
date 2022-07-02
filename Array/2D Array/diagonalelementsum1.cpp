#include<iostream>
using namespace std;

class Dimensions 
{
 	public:
 		
 		void Area(int x)
 		{
		    cout<<"Area of circle: "<<3.14*x*x<<"\n";	
		}
		
		void Area(int x, int y)
		{
			cout<<"\nArea of rectangle: "<<x*y<<"\n";	
		}
		
		void Area(int x, int y, int z) 
		{
			cout<<"\nLateral S.Area of cuboid: "<<2*(x+y)*z<<"\n";			
		}
		
	
};


int main() 
{
 		Dimensions obj;
 		obj.Area(5);
 		obj.Area(4,6);
 		obj.Area(3,5,8);
 			
   return 0;
}