#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

double sum(double a, double b){
    double c = a + b;
    return c;
}

int main()
{
    int x =10;
    int y (20);
    double x2(10.05);
    double y2(20.0005);

    cout << "Sum of two integers: "<<sum(x,y)<<endl;

    cout << "Sum of two doubles: "<< sum(x2,y2)<<endl;


}
