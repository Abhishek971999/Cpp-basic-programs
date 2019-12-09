//C++ Program to Find ncR and nPr of any Number
#include<iostream>
using namespace std;
int factorial(int number){
    int fact=1;
    for(int i=1;i<=number;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r,ncr,npr;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter value of r : ";
    cin>>r;
    npr = factorial(n)/factorial(n-r);
    ncr = npr/factorial(r);
    cout<<"Value of NcR is : "<<ncr<<endl;
    cout<<"Value of NpR is : "<<npr<<endl;
    return 0;

}
