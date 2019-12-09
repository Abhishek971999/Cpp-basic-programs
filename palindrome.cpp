//C++ program to Check Number is Palindrome or not
#include<iostream>
using namespace std;
int main(){
    int number,rev=0,i,remainder,a;
    cout<<"Enter the number :";
    cin>>number;
    a = number;
    while(number!=0){
        remainder = number%10;
        rev = rev*10 + remainder;
        number/=10;
    }
    if(a==rev){
        cout<<"The number is palindrome";
    }
    else
        cout<<"The number is not palindrome";
    return 0;
}
