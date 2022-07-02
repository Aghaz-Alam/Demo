#include<iostream>
using namespace std;

class Student
{
     int id;
     char name[20];
    public:
     void setData();
     void showData();
     
};

void Student::setData()
{
    cout<<"\nEnter the values of id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;
}

void Student::showData()
{
     cout<<"\nId: "<<id<<"    "<<"Name: "<<name<<endl;
}


int main()
{
   Student s[10];
   int n, i;
   cout<<"\nEnter number of Students: ";
   cin>>n;
   if(n<1 ||n>10)
      cout<<"Value of n should be in between 1 to 10 only."<<endl;
    else
       for(i=0; i<n; i++)
       {
         s[i].setData();
        }
        cout<<"\nStudent's id"<<" "<<" Student's Name"<<endl;
      
        for(i=0; i<n; i++)
        {
         s[i].showData();
        }
      
  
  return 0;
}

    