//Circumference of Circle
#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
 float radius, circumference;
 cout<<"Enter radius of circle :";
 cin>>radius;
 // Circumference of Circle = 2 X PI x Radius
 circumference = 2*PI*radius;
 cout<<"Circumference of circle: "<<circumference<<endl;
 return 0;
}
