#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
    char str1[100];
    int i,v=0;
    cout<<"Enter the string :";
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
             v++;
    }
    cout<<"Total Vowels in String : "<<v<<endl;
    return 0;
}
