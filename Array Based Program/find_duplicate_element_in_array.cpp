#include<iostream>
using namespace std;

 int main()
 {
  int i,arr[20],j,n;
  cout<<"Enter Size of array: ";
  cin>>n;
  cout<<"Enter the elements of array: ";
  for(i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  cout<<"Duplicate Values are: ";
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j])
            cout<<"\n"<<arr[i];
    }
  }
   return 0;
 }
