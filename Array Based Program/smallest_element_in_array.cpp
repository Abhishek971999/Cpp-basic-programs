#include<iostream>
using namespace std;
int main(){
    int smallest,i,a[20],n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    smallest  = a[0];
    for(i=0;i<n;i++){
        if(a[i]<smallest)
            smallest = a[i];
    }
    cout<<"The smallest element in array is : "<<smallest<<endl;
    return 0;
}
