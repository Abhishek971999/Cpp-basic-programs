//Compound Interest Example in C++
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   float p,r,i,t,ci,a;
   cout<<"Enter Principal Amount : ";
   cin>>p;
   cout<<"Enter Interest Rate: ";
   cin>>r;
   cout<<"Enter time period in years: ";
   cin>>t;
   i=1+(r/100);
   // ci=pow(i,t);
   ci=1;
   for(a=1;a<=t;a++)
    ci=ci*i;
   ci=p*ci-p;
   cout<<"Compound interest is: "<<ci;
   return 0;
}
