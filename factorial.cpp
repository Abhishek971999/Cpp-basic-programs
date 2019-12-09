//Factorial of a Number in C++
#include<iostream>
using namespace std;
int main(){
    int number,i,fact=1;
    cout<<"Enter the number:";
    cin>>number;
    cout<<number<<endl;
    for(i=1;i<=number;i++){
        fact = fact*i;
    }
    cout<<"\nThe factorial of the number is :"<<fact<<endl;
    return 0;
}
