//C++ program to Print Table of any Number
#include<iostream>
using namespace std;
int main(){
    int number,i,result;
    cout<<"Enter the number to print it's table :";
    cin>>number;
    for(i=1;i<=10;i++){
        result = number*i;
        cout<<number<<" x "<<i<<" = "<<result<<endl;
    }
    return 0;
}
