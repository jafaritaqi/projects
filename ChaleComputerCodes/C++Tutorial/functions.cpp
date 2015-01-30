#include <iostream>
using namespace std;
void print(int s){
    cout << "Sum is : "<<s<<endl;
}

int sum(int a, int b){
   int add = a+b;
   return add;
}

int sum(int a, int b,int c){
   int add = a+b+c;
   return add;
}

int sum(int a, int b,int c,int d){
   int add = a+b+c+d;
   return add;
}

int main(){
    int x=10; int y = 20;
    print(sum(x,y));
    print(sum(x,y,30));
    print(sum(x,y,30,40));
    return 0;
}


