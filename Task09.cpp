#include<iostream>
using namespace std;
int main()
{
    int num, sum=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0){
       //  Find last digit of num and add to sum 
        sum += num % 10;

        // Remove last digit from num 
        num = num / 10;
    }
    cout<<"Sum of the digit is: "<<sum<<endl;
    return 0;
}
