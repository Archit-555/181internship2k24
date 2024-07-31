#include<iostream>
using namespace std;
int main(){
int classes_held,classes_attended;
cout<<"Enter number of classes held: "<<endl;
cin>>classes_held;
cout<<"Enter number of classes attended: "<<endl;
cin>>classes_attended;
double percentage = (double) classes_attended / classes_held * 100;
cout<<"Percentage of classes attended: "<< percentage<<"%"<<endl;
if (percentage >=75){
    cout<<"Student is allowed to sit in exam."<<endl;
    }else{
    cout<<"Student is not allowed to sit in exam."<<endl;
    }
return 0;
}
