#include <iostream>
using namespace std;
int main(){
	cout << 2+3<<endl;//Normal operation
	cout << 2 + 3 * 4 << endl;//Multiplication first and then summation

	cout << 2 + 3 * 4 / 2 << endl; //Same level of precedence so from left to right
	cout << (2 + 3) * 4 / 2 << endl;//Paranthesis first and then multiplication 
	cout << (2 +(6/3)+ 3) * 4 / 2 << endl;//Inner Paranthesis first and then outter one and then multiplication 

/*
www.github.com/jafaritaqi/chalecomputercodes
*/	

}
