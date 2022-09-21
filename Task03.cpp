#include<iostream>
using namespace std;
int main()
{
    double radius,diameter,area,circumference;

    cout<<"Enter radius: ";
    cin>>radius;

    cout<<"The diameter of the circle is: ";
    diameter = 2*radius;
    cout<<diameter<<endl;

    cout<<"The area of the circle is: ";
    area = 3.14*radius*radius;
    cout<<area<<endl;

    cout<<"The circumference of the circle is: ";
     circumference = 2*3.14*radius;
    cout<<circumference<<endl;
    return 0;
}