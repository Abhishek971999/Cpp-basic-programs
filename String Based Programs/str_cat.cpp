#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"Enter the first string : ";
    gets(str1);
    cout<<"Enter the second string : ";
    gets(str2);
    strcat(str1,str2);
    cout<<"The concatenated string is : "<<str1<<endl;
    return 0;
}
