#include<iostream>
using namespace std;
int main()
{
    int i,num[5],S;
    for(i=0;i<5;i++)
    {
        cout<<"enter number= ";
        cin>>num[i];
    }
    S=0;
    for(i=0;i<5;i++)
    {
       S=S+num[i];
    }
cout<<"\nSum of numbers= "<<S;
}