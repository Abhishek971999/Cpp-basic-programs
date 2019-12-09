//GCD of the numbers
#include<iostream>
using namespace std;
int main(){
    int n1,n2,gcd;
    cout<<"Enter the 2 numbers:";
    cin>>n1>>n2;
   while(n1!=0 && n2!=0){
     if(n1>n2){
        n1-=n2;
    }
    else if(n2>n1){
        n2-=n1;
    }
    else{
        cout<<n1<<endl;
        break;
    }
   }
    return 0;
}
