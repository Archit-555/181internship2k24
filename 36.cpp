#include<iostream>
#include<string>

int main(){
std::string str ="HELLO,WORLD!";
std::string from = "WORLD";
std::string to ="C++";
size_t start_pos = str.find(from);
if(start_pos != std::string::npos){
str.replace(start_pos, from.length(),to);
}
std::cout<<"String after replacement:"<<str<<std::endl;
return 0;
}
