#include<iostream>
using namespace std;
int main()
{
    int ar[3][3],i,j,max=0,min;
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
    min=ar[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ar[i][j]>max)
            max=ar[i][j];
            if(ar[i][j]<min)
            min=ar[i][j];
        }
    }
    cout<<"\nMaximum value= "<<max;
    cout<<"\nMinimum value= "<<min;
    return 0;
}

