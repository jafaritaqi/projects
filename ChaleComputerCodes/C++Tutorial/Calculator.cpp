#include<iostream>
using namespace std;
int main(){
   float x;
   float y;
   cout <<"Enter 1st Number\n";
   cin>>x;
   cout << "Enter Second Number:\n";
   cin >> y;
    int multiplication = x*y;

    int sum = x + y;

    int differ = x - y;

    float division = x / y;


    cout <<"Multiplication "<< multiplication <<endl;
    cout <<"Sum:  "<< sum <<endl;
    cout <<"Difference: "<< differ <<endl;
    cout <<"Division: "<< division <<endl;


    //This part of code is comment and has no effect on program
    /*
    int first = 15;
    int second = 10;
    int remainder = first % second; //the result will be 5
    cout << "The remainder of first divided by second"
    */
    return 0;
}
