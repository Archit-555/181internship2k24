#include<iostream>
using namespace std;
//tools
const int Pen{10};
const int marker{20};
const int eraser{30};
const int rectangle{40};
const int circle{50};
const int ellipse{60};
int main(){
int tool {eraser};
switch(tool){

    case Pen: {
    cout<<"Active tool is Pen"<<endl;
    }
    break;
    case marker: {
    cout<<"Active tool is marker"<<endl;
    }
    break;
    //if(tool==eraser|| tool==rectangle || tool==circle)
    {
    //cout <<"Drawing shapes"<< endl;
    //}
    case eraser:
    case rectangle:
    case circle:
    {
    cout<<"Drawing shapes"<<endl;
    }
     }

    break;

    case ellipse : {

       cout << "Active tool is Ellipse" << endl;

    }

    break;

    default: {

      cout << "No match found" << endl;

    }

      break;

  }

  cout << "Moving on" << endl;

  /*

  // Condition can only be integer of enum (We'll learn about enums later in the course)

  string name {"John"};

  switch (name) // Compiler error!

  {

  }

  */

  return 0;

}

















