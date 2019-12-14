#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char strs[100], countword=0, strword[15];
	int i, len;
	cout<<"Enter a sentence : ";
	gets(strs);
	len=strlen(strs);
	for(i=0; i<len; i++)
	{
		if(strs[i]==' ')
		{
			countword++;
		}
	}
	cout<<"Total Number of words in the Sentence is: "<<countword+1;
	return 0;
}
