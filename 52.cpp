//STL- it is a collection of library/algo,function and other component/data structure to simplify/development the c++ programming.
//container: it is used to store the data in sequential manner to simplify your requirement.
//seq container:
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("gajab");
    s.push("sajab");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Element after pop: "<<s.top()<<endl;
}
