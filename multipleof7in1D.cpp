#include<iostream>
using namespace std;
int main()
{
    int ar[5],count=0,i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter number: ";
        cin>>ar[i];
    }
    cout<<"Numbers that are divisible by 7 are:\n";
    for(i=0;i<5;i++)
    {
        if(ar[i]%7==0)
        {
            cout<<ar[i]<<"\t";
            count++;
        }     
    }
    cout<<"\nTotal Numbers that are divisible by 7 are: "<<count;
    return 0;
}