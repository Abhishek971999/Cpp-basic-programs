#include<iostream>
using namespace std;
int main(){
    int number,arm=0,remainder,a;
    cout<<"Enter the number:";
    cin>>number;
    a = number;
    while(number!=0){
        remainder = number%10;
        arm = remainder*remainder*remainder+arm;
        number/=10;
    }
    if(arm==a)
        cout<<"It is an Armstrong number";
    else
        cout<<"It is not an Armstrong number";
    return 0;
}
