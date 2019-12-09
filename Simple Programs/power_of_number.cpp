//Program to find Power of any Number in C++
#include<iostream>
using namespace std;
int main()
{
   int base,power,i,pow=1;
   cout<<"Enter base and power: ";
   cin>>base>>power;
   for(i=power;i>0;i--)
   {
   pow=pow*base;
   }
   cout<<"Value is: "<<pow;
}
