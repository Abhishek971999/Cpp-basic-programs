#include<iostream>
using namespace std;
int main(){
    int largest,i,a[20],n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    largest  = a[0];
    for(i=0;i<n;i++){
        if(a[i]>largest)
            largest = a[i];
    }
    cout<<"The largest element in array is : "<<largest<<endl;
    return 0;
}
