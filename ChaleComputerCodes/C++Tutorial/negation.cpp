#include <iostream>
using namespace std;

void negation(int &digit){
   digit = digit*-1;

}

void print(int s){
    cout << "Reuslt is : "<<s<<endl;
}

int main(){

    int a=10;

    print(a);

    negation(a);

    print(a);

    return 0;
}
