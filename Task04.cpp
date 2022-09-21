#include<iostream>
using namespace std;
int main()
{
    int a ,b, c;
    // Taking User Inputs
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << " and b = " << b << endl;

    //Swapping two integers
    c = a;
    a = b;
    b = c;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << " and b = " << b << endl;
    return 0;
}