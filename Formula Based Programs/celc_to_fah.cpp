//Celsius to Fahrenheit in C++
#include<iostream>
using namespace std;
int main(){
    float cel, far;
    cout<<"Enter temp. in Celsius : ";
    cin>>cel;
    far = cel * 9/5 + 32;
    cout<<"Temperature in Fahrenheit: "<<far;
    return 0;
}
