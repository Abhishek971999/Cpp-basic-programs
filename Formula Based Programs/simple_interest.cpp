//Simple Interest in C++
#include<iostream>
using namespace std;

int main()
{
  float amount, rate, time, si;
  cout<<"Enter Principal Amount: ";
  cin>>amount;
  cout<<"Enter Rate of Interest: ";
  cin>>rate;
  cout<<"Enter Period of Time: ";
  cin>>time;
  si = (amount * rate * time) / 100;
  cout<<"Simple Interest: "<<si;
  return 0;
}
