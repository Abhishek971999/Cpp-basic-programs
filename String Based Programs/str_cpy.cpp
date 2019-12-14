#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"Enter first string : ";
    gets(str1);
    strcpy(str2,str1);
    cout<<"The copied string is : "<<str2<<endl;
    return 0;
}
