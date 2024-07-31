#include<iostream>
using namespace std;

int main() {
int apple_count(5);
int orange_count(10);
int fruit_count (apple_count + orange_count);
//int bad_initialization (doesnt_exist3 + doesnt_exist4 );

//information lost , less safe than braced initializers
int narrowing_conversion_functional (2.9);

cout << "Apple count : " << apple_count << endl;
cout<< "orange count : " << orange_count<< endl;
cout<< "fruit count : " << fruit_count<< endl;
cout <<" Narrowing conversion : " << narrowing_conversion_functional << endl; //will loose info
return 0;
}
