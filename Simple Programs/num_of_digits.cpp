//C++ Program to Find number of Digits from any number
#include<iostream>
using namespace std;
int main(){
    int number,i,count=0;
    cout<<"Enter the number:";
    cin>>number;
    while(number!=0){
        number/=10;
        count++;
    }
    cout<<"The number of digits is:"<<count<<endl;
    return 0;
}
