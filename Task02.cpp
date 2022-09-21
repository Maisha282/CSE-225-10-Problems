#include<iostream>
using namespace std;
int main()
{
   string name;
   cout<<"Enter Name: ";
   getline(cin,name);

   int id;
   cout<<"Enter Id: ";
   cin>>id;

   double cgpa;
   cout<<"Enter Cgpa: ";
   cin>>cgpa;

   cout<<"Name: "<<name<<endl;
   cout<<"Id: "<<id<<endl;
   cout<<"Cgpa: "<<cgpa<<endl;
   return 0;


}