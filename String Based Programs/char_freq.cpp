#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
    char str[100],c;
    int i,count=0;
    cout<<"Enter the string  : ";
    gets(str);
    cout<<"Enter the character to be found : ";
    cin>>c;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
            count++;
    }
    if(count==0)
        cout<<"The character is not present in the string ";
    else
        cout<<"The character "<<c<<" is present in the string "<<count<<" number of times.";
    return 0;
}
