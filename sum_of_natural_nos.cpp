//Sum of Natural Numbers Program in C++
#include<iostream>
using namespace std;
int main(){
    int number,i,sum=0;
    cout<<"Enter number of natural numbers to add:";
    cin>>number;
    for(i=1;i<=number;i++){
        sum+=i;
    }
    cout<<"The sum is :"<<sum;
    return 0;
}
