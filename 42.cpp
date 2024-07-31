#include <iostream>
#include <string>
using namespace std;
int main() {
int choice;
char repeat;
bool continueProgram = true;
while (continueProgram) {
do {
cout << "Enter your choice:\n"
         << "1. Park a car\n"
         << "2. Park a bike\n"
         << "3. Park a rickshaw\n"
         << "4. Exit\n"
         << "5. Display question\n";
cin >> choice;
switch (choice) {
case 1:
cout << "Park car.\n";
break;
case 2:
cout << "Park bike.\n";
break;
case 3:
cout << "park Rickshaw.\n";
break;
case 4:
cout << "Exit.\n";
continueProgram = false;
break;
case 5:
cout << "Do you want to perform again? (y/n): ";
cin >> repeat;
if (repeat != 'y' && repeat != 'Y') {
continueProgram = false;
}
break;
default:
cout << "Invalid choice.\n";
}
}
while (choice != 4 && choice != 5);
if (choice == 5 && (repeat == 'y' || repeat == 'Y')) {
continue;
} else {
break;
}
}
return 0;
}















