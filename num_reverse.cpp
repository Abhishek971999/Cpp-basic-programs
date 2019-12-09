//C++ Program to Reverse a Number
#include<iostream>
using namespace std;
int main(){
    int number,reversed_number = 0,a,remainder;
    cout<<"Enter the number to be reversed:";
    cin>>number;
    a = number;
    while(number!=0){
        remainder = number%10;
        reversed_number = (reversed_number*10)+remainder;
        number/=10;
    }
    cout<<"The entered number is "<<a<<" and the reversed number is "<<reversed_number<<endl;
    return 0;
}
