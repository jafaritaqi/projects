#include<iostream>
using namespace std;
//Scope
int policeNumber=119; //Global variable --> Global scope

void Roshan(){
    int finance = 849; //local variable
    int customerService = 865; //local variable
}

void MTN() {
    int HR = 939;//local variable
    int security= 940;//local variable
    int x = policeNumber;
   // int y = finance;
}



int main(){
    cout << "call Police "<< policeNumber<<endl;
   // cout << "call Finance " << finance <<endl;
}
