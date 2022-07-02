#include<iostream>
using namespace std;
/* void findMin(int arr[], int size)
{
    int min=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
           min=arr[i];
    }
    cout<<"Min value: "<<min<<endl;
}

void findMax(int arr[], int size)
{
    int max=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
           max=arr[i];
    }
    cout<<"Max value: "<<max<<endl;
} */
void findMinAndMax(int arr[], int size, int *min, int *max)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]<*min)
            *min=arr[i];
        if(arr[i]>*max)
            *max=arr[i];   
    }
    cout<<"Min is "<<*min<<endl;
    cout<<"Max is "<<*max<<endl;
}
int main()
{
    int array[]={2,1,5,-5,12};
    /* findMin(array, 5);
    findMax(array,5); */
    int min=array[0];
    int max=array[0];
    findMinAndMax(array, 5, &min, &max);
  return 0;
}