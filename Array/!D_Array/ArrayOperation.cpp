#include<iostream>
#include<climits>
using namespace std;

int main()
{
    
    int a[10], n;
    cout<<"Enter range: ";
    cin>>n;
    cout<<"\nEnter elements of array: \n";
    for(int i=0; i<n; i++)
    {
       cin>>a[i];
    }
    
    
    cout<<"\n\n";
    
    cout<<"\nMax and Min in the elements of Array:\n";
    int max=INT_MIN;
    int min=INT_MAX;
    
    for(int i=0; i<n; i++)
    {
       if(a[i]>max)
           max=a[i];
       else if(a[i]<min)
            min=a[i];
    }
    cout<<"Max= "<<max<<"\n";
    
    cout<<"Min= "<<min<<"\n";
    
    
    
    
    cout<<"\n\n";
    
    //Sort the elements of Array

    for(int i=0; i<n; i++)
    {
       for(int j=i+1;j<n;j++) 		
       { 			
          if(a[i]>a[j]) 			
          { 				
             int temp =a[i]; 				
                  a[i]=a[j]; 				
                  a[j]=temp; 			
            } 		
       }
    }
    cout<<"\nSorted elements of Array:\n";
    for(int i=0; i<n; i++)
    {
       cout<<a[i]<<"\n";
    }
    
    
    cout<<"\n\n";
    //Reversing Array Elements
    for(int i=0; i<n/2; i++)
    {
       /* 
         int temp;
         temp=a[i];
         a[i]=a[n-i-1];
         a[n-i-1]=temp;
       */
      swap(a[i],a[n-i-1]);
    
    }
    
    cout<<"\nReversing the elements of Array:\n";
    for(int i=0; i<n; i++)
    {
       cout<<a[i]<<"\n";
    }
    
    
    
    cout<<"\n\n";
    
    cout<<"\nSum of the elements of array: ";
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
       sum+=a[i];
    }
    cout<<sum<<"\n";
   
    
    cout<<"\n\n";
    cout<<"\nSum of the even and odd elements of array: ";
    int evenSum=0;
    int oddSum=0;
    for(int i=0; i<n; i++)
    {
       if(a[i]%2==0)
          evenSum+=a[i];
        else
          oddSum+=a[i];
    }
    cout<<"\nEven Sum: "<<evenSum;
    
    cout<<"\nOdd Sum: "<<oddSum;
   return 0;
}