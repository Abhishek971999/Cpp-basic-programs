#include<iostream>
using namespace std;
int main(){
    int a[20],b[20],i,j,n;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    cout<<"Enter the elements of array :"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-1,j=0;i>=0;i--,j++){
        b[i] = a[j];
    }
    cout<<"The reversed array is : "<<endl;
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
