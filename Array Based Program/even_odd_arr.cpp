#include<iostream>
using namespace std;
int main(){
    int i,n,j=0,k=0,a[20],even[20],odd[20];
    cout<<"Enter length of the array : ";
    cin>>n;
    cout<<"Enter elements of the array : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[j] = a[i];
            j++;
        }
        else{
            odd[k] = a[i];
            k++;
        }
    }
    cout<<"The even array is : ";
    for(i=0;i<j;i++)
        cout<<even[i]<<" ";
    cout<<"\nThe odd array is : ";
    for(i=0;i<k;i++)
        cout<<odd[i]<<" ";
    return 0;
}
