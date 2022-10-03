#include<iostream>
using namespace std;

void reversearr(int arr[],int n)
{
    int rev=n;
    int a;
   for(int i=0; i<(n/2) ; i++)
    {
       a=arr[i];
       arr[i]=arr[rev-1];
       arr[rev-1]=a;
       rev=rev-1;
    }

}
void display (int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[6]={1,4,7,3,7,9};


    reversearr(arr,6);
    display(arr,6);


}