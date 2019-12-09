//C++ Program to Generate Fibonacci Series
#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,i,number,next;
    cout<<"Enter the number of elements in the Fibonacci series:";
    cin>>number;
    cout<<"The Fibonacci series is :";
    for(i=0;i<number;i++){
        cout<<first<<endl;
        next = first+second;
        first = second;
        second = next;
    }
    return 0;
}
