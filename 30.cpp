#include <iostream>

using namespace std;

void printArray(int a[], int size) {

  for (int i = 0; i < size; i++) cout << a[i] << " ";

  cout << endl;

}

int main() {

  int a[] = {4, 6, 7, 8}, size = 4, choice, element, position;

  while (true) {

    cout << "\n1.Insert 2.Delete 3.Update 4.Read 5.Exit\nChoice: ";

    cin >> choice;

    if (choice == 5) break;

    if (choice == 4) { printArray(a, size); continue; }

    cout << "Position: ";

    cin >> position;

    if (position < 0 || position >= size + (choice == 1)) {

      cout << "Invalid position\n";

      continue;

    }

    switch (choice) {

      case 1:

        cout << "Element: ";

        cin >> element;

        for (int i = size++; i > position; i--) a[i] = a[i-1];

        a[position] = element;

        break;

      case 2:

        for (int i = position; i < --size; i++) a[i] = a[i+1];

        break;

      case 3:

        cout << "New element: ";

        cin >> a[position];

        break;

      default:

        cout << "Invalid choice\n";

    }

  }

  return 0;

}



