#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,j,flag,count=0;
    cout<<"Enter elements of an array:\n";
    for(i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    cout<<"Prime numbers in the given array are:\n";
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=2;j<ar[i];j++)
        {
            if(ar[i]%j==0)
            {
                flag=1;
                break;
            }       
        }
        if(flag==0)
        {
            cout<<"\t"<<ar[i];
            count++;
        }
    }
    cout<<"\nTotal number of prime number in the array are: "<<count;
    return 0;
}