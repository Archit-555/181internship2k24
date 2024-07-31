#include<iostream>
#include<array>
using namespace std;
int main(){
//normal array
//int a[]={};
//stl array
array<int,4> a={3,4,2,7};
int size = a.size();
cout<<size<<endl;

for(int i=0;i<size;i++){
cout<<a[i]<<endl;
}
cout<<" Element at index = "<<a.at(3)<<endl;
bool trueFalse = a.empty();
cout<<" true or false = "<<trueFalse;
bool empty=a.empty();
cout<<" is array is empty or not = " <<empty;
cout<<"\nFirst element = "<<a.front()<<endl;//it will display first element
cout<<"Last element = "<<a.back()<<endl;//it will display last element
return 0;
}
