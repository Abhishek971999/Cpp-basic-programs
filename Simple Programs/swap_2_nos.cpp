//Swap two numbers using third variables
#include<iostream>
using namespace std;
int main(){
    int first_num,second_num,c;
    cout<<"Enter the 2 numbers to be swapped:";
    cin>>first_num>>second_num;
    c = first_num;
    first_num = second_num;
    second_num = c;
    cout<<"\nAfter swapping,\nThe first number is :"<<first_num<<"\nThe second number is :"<<second_num<<endl;
    return 0;
}
