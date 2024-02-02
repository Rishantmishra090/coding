#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter any alphabet: ";
    cin>>c;
    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"The alphabet is vowel";
        break;
        default:cout<<"The alphabet is consonant";
    }
}