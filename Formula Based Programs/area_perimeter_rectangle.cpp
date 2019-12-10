//C++ Program to Calculate Area and Perimeter of Rectangle
#include<iostream>
using namespace std;
int main()
{
 int len, bre, peri, area;
 cout<<"Enter Length and Breadth of the Rectangle: ";
 cin>>len>>bre;
 area=len*bre;
 peri=(2*len)+(2*bre);
 cout<<"Area of Rectangle: "<<area<<"\tPerimeter Rectangle: "<<peri;
 return 0;
}
