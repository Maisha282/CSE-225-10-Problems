#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;// user input

    double sum =0;
    int i=1;
    while(i<=n)
    {
        if(i==1){
            cout<<i;
        }
        else{
            cout<<"1/"<<i;// For printing the series

        }
        if(i<n){
            cout<<" + ";// For printing the series
        }
        sum += 1.0/(double)i;// Sum of the series
        i++;
    }
    cout<<"\n";
    cout<<"Sum of the series: "<<sum<<endl;

  return 0;
}