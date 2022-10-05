#include<iostream>
using namespace std;

void reverseArray(int arr[], int len)
{
    int rev=len;
    int a;
   for(int i=0; i<(len/2); i++)
    {
       a=arr[i];
       arr[i]=arr[rev-1];
       arr[rev-1]=a;
       rev=rev-1;
    }

}
void display (int arr[],int len)
{
    for (int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[6]={1,4,7,3,7,9};
    reverseArray(arr,6);
    display(arr,6);
}
