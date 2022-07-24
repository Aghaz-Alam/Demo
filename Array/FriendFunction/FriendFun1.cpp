#include<iostream>
using namespace std;
class Base
{
      int x;
    public:
      Base(int x):x{x}{
      } 
      friend void func(Base &);
};
void func(Base &Obj)
{
    cout<<Obj.x<<endl;
    Obj.x=20;
    cout<<Obj.x<<endl;
}
int main()
{
    Base b(10);
    func(b);
  return 0;
}