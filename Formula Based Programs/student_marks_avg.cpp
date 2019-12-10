//C++ Program to Calculate Percentage of Student Marks
#include<iostream>
using namespace std;

int main()
{
    int no, i;
    float marks[10], per=0, total=0;
    cout<<"Enter number of subject: ";
    cin>>no;
    cout<<"Enter marks of "<<no<<" subjects";
    for(i=0; i<no; i++)
    {
        cin>>marks[i];
    }
    for(i=0; i<no; i++)
    {
        total=total+marks[i];
    }
    per=total/no;
    cout<<"Percentage: "<<per;
    return 0;
}
