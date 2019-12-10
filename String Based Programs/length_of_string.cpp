//C++ program to Find Length of String
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char string1[100];
    int count=0;
    cout<<"Enter the string :";
    gets(string1);
    for(int i =0;string1[i]!='\0';i++){
        count++;
    }
    cout<<"The length of the string is :"<<count<<endl;
    return 0;
}
