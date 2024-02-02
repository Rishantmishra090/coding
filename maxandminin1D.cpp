#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,max=0,min;
    for(i=0;i<5;i++)
    {
        cout<<"Enter number: ";
        cin>>ar[i];
    }
    min=ar[0];
    for(i=0;i<5;i++)
    {
        if(ar[i]>max)
        max=ar[i];
        if(ar[i]<min)
        min=ar[i];
    }
    cout<<"\nMaximum value= "<<max;
    cout<<"\nMinimum value= "<<min;
    return 0;
}