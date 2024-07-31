#include <iostream>
using namespace std;
 int main(){
 double rupees, pounds;
 const double rupee_to_pound = 0.0094; // 1 Rupee = 0.0094 Pounds
 const double pound_to_rupee = 106.91; //1 Pound = 106.91 Rupees


 // Rupees to Pounds
 cout<<"Enter amount in Rupees: ";
 cin>> rupees;
 pounds = rupees * rupee_to_pound;
 cout<< rupees << "Rupees = " << pounds << "pounds" <<endl;

 //Pounds to rupees
 cout<<"Enter amount in pounds: ";
 cin>> pounds;
 rupees = pounds * pound_to_rupee;
 cout<< pounds << "Pounds = " << rupees << "Rupees" <<endl;
 return 0;}
