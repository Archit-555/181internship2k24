#include<iostream>
using namespace std;
void add(int a,int b){
 return a+b;
}


 int main(){
 int num1,num2,sum=0,result;
  sum = num1+num2;
  cout<<"Enter value of num1"<<endl;
  cin>>num1;
  cout<<"Enter value of num2"<<endl;
  cin>>num2;
 int result = add(num1 , num2);
  cout<<"sum is :"<<result<<endl;
  }
