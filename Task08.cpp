#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,number;
    cout<<"Enter a Number: ";
    cin>>number;

    n1=0;
    n2=1;
    n3=0;

    cout<<"The first "<<number<<" Fibonacci numbers are: ";
    for(int i=1; i<=number;i++){
        cout<<n3<<" ";
        // Copying the numbers and then store the sum of the previous two numbers to get the accurate series
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return 0;
}