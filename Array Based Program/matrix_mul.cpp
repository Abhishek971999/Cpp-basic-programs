#include<iostream>
using namespace std;
int main()
{
	int mat1[2][2], mat2[2][2], mat3[2][2], sum=0, i, j, k;
	cout<<"Enter First Matrix Element (2*2): ";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter Second Matrix Element (2*2): ";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"Multiplying two Matrices........\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum=0;
			for(k=0; k<2; k++)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
			}
			mat3[i][j] = sum;
		}
	}
	cout<<"\nMultiplication of Two Matrices : \n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
