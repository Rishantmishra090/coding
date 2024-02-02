#include<iostream>
using namespace std;
int main()
{
    int ar[3][3],i,j,k,flag,count=0;
    cout<<"Enter the elements of an array:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"\nThe given 2D array is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<ar[i][j];
        }
        cout<<"\n";
    }
    cout<<"Prime numbers in the given array are:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            flag=0;
            for(k=2;k<ar[i][j];k++)
            {
                if(ar[i][j]%k==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"\t"<<ar[i][j];
                count++;
            }
        }
    }
    cout<<"\nTotal number of prime number in the array are: "<<count;
}
        