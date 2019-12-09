//C++ program to find sum of digits of a number
#include<iostream>
using namespace std;
int main()
{
    int remainder,number,sum=0;
    cout<<"Enter any number : ";
    cin>>number;
    while(number>0)
    {
        remainder=number%10;
        number=number/10;
        sum=sum+remainder;
    }
    cout<<"\nSum of digits : "<<sum<<endl;
}
