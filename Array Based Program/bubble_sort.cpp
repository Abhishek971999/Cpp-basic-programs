#include<iostream>
using namespace std;
int main(){
    int i,j,temp,arr[10];
    cout<<"Enter elements of array : ";
    for(i=0;i<10;i++)
        cin>>arr[i];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\nData after sorting : ";
     for(j=0;j<10;j++){
        cout<<arr[j];
    }
    return 0;
}
