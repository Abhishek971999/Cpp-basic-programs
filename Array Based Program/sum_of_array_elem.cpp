#include<iostream>
using namespace std;
int main(){
    int a[20],sum=0,n,i;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"The sum of the array elements is : "<<sum<<endl;
    return 0;
}
