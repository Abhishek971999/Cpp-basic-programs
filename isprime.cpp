//Prime number program in C++
#include<iostream>
using namespace std;
int main(){
    int number,i,counter=0;
    cout<<"Enter the number to check if it prime or not:";
    cin>>number;
    for(i=1;i<=number;i++){
        if(number%i==0){
            counter++;
        }
    }
    if(counter>2)
         cout<<"It is not a prime number"<<endl;
    else
    cout<<"It is a prime number"<<endl;
}
