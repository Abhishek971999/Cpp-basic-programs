//C++ Program to Convert Uppercase to Lowercase
#include<iostream>
using namespace std;
int main(){
    char lower,upper;
    cout<<"Enter the uppercase letter to convert to lowercase : ";
    cin>>upper;
    lower=int(upper)+32;
    cout<<"The lowercase character is :"<<char(lower);
    return 0;
}
