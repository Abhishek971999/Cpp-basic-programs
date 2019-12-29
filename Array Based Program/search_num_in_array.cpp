#include<iostream>
using namespace std;
int main(){
    int a[5],i,pos=0,e;
    cout<<"Enter the elements of array : "<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>e;
    for(i=0;i<5;i++){
        if(a[i]==e){
            pos = i+1;
        }
    }
    if(pos!=0)
        cout<<"Element found at position "<<pos<<endl;
    else
        cout<<"Element is not present in the array!!";
    return 0;
}
