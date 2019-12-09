//Even and Odd Program in C++
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number to check if it is even or odd:";
    cin>>number;
    if(number%2==0)
        cout<<"The number is Even"<<endl;
    else
        cout<<"The number is Odd"<<endl;
    return 0;
}
