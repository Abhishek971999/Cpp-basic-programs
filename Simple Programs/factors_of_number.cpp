#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout<<"Enter any positive integer : ";
    cin>>number;
    cout<<"Factors of "<<number<<" are : "<<endl;
    for(i = 1; i <= number; ++i)
    {
       if(number % i == 0)
          cout<<i<<endl;
   }
   return 0;
}
