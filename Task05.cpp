#include<iostream>
using namespace std;
int main()
{
    char ope;
    float a, b,sum,sub,mul,div;
    // Taking user inputs
    cout<<"Enter the operator: ";
    cin>>ope;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

     // Conditions for creating the calculator
     if(ope== '+')
     {
        sum = a+b;
        cout<<"Result: "<<sum<<endl;
     }
    

        else if(ope== '-')
        {
        sub = a-b;
          cout<<"Result: "<<sub<<endl;
        }
     
       else if (ope == '*'){
        mul = a*b;
          cout<<"Result: "<<mul<<endl;
       }
        else if(ope=='/'){
        div = a/b;
          cout<<"Result: "<<div<<endl;
        }
        else{
         cout << "Error!!!! operator is not correct";
        }

        

    return 0;

}