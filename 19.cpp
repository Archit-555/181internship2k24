#include<iostream>
using namespace std;

int add (int a, int b)
{
int sum;
sum = a+b;
}
int add (int a,int b,int c)
{
int sumofthree;
sumofthree=a=b+c;
}
int main()
 {
 int a,b;
 cout<<"Enter two numbers:"<<endl;
 cin>>a>>b;
 add(a ,b);
 }
{




 int a,b,c;
 cout<<"Enter three numbers:"<<endl;
 cin>>a>>b>>c;
 add(a ,b, c);
 }
 return 0;
 }
//Function overloading: using same function again and again using same parameters.
//Compile time polymorphism: Compiler tells which function to call during compile time
//run time polymorphism: resolves during run time
//Polymorphism: means in many forms
// Use cases for function overloading:
