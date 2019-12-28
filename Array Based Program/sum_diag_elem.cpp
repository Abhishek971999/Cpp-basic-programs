#include<iostream>
using namespace std;
int main()
{
   int i, j, matrix[10][10], row, col;
   int sum = 0;
   cout<<"Enter the number of Rows : ";
   cin>>row;
   cout<<"\nEnter the number of Columns : ";
   cin>>col;
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
	  {
         cout<<"\nEnter the Element a["<<i
         <<"]["<<j<<"] : ";
         cin>>matrix[i][j];
      }
   }
  for (i = 0; i < row; i++)
  {
   for (j = 0; j < col; j++)
    {
     if (i == j)
     sum = sum + matrix[i][j];
    }
   }
   cout<<"\nAddition of Diagonal Array Elements in the Matrix is: "<<sum;
   return 0;
}
