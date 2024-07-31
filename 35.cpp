#include<iostream>
#include<string>
int main(){
 std::string str = "HELLO,WORLD!";
 std::string substr = "WORLD";
 size_t found = str.find(substr);
 if(found != std::string::npos){
    std::cout<<"Substring found at index: "<<found<<std::endl;
    }else{
std::cout<<"Substring not found index: "<<std::endl;
}
return 0;
}
