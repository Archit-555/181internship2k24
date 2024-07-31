#include <iostream>
using namespace std;
void pound(float rup=100){
    float pound=rup/106;
    cout<<"Currency in pound from rupees: "<<pound<<"\n";
    }
void rup(float pound=100){
    float rup=pound*106;
    cout<<"Currency in rupees from pound: "<<rup<<"\n";
}
float usd(float rup=100){
    float usd=rup/83.52;
    cout<<"Currency in usd from rupees: "<<usd<<"\n";
    }
void rup1(float usd=100){
    float rup1=usd*83.52;
    cout<<"Currency in rupees from usd: "<<rup1<<"\n";
}
float yuan(float rup=100){
    float yuan=rup/11.48;
    cout<<"Currency in yuan from rupees: "<<yuan<<"\n";
    }
float rup2(float yuan=100){
    float rup2=yuan*11.48;
    cout<<"Currency in rupees from yuan: "<<rup2<<"\n";
}

int main(){
    pound(100);
    usd(100);
    yuan(100);
    rup(100);
    rup1(100);
    rup2(100);
    return 0;
}
