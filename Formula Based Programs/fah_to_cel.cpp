//Fahrenheit to Celsius in C++
#include<iostream>
using namespace std;
int main()
{
 float cel, far;
  cout<<"Enter temperature in Fahrenheit: ";
  cin>>far;
  cel = (far - 32) * 5/9;
  cout<<"Temperature in Celsius: "<<cel;
 return 0;
}
