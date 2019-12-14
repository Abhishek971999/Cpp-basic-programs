#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    int i=0,j;
    char str[100],temp;
    cout<<"Enter the string : ";
    gets(str);
    j = strlen(str)-1;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<"The reversed string is :"<<str;
    return 0;

}
