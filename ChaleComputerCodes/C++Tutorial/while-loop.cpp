#include <iostream>
using namespace std;
int main(){
    char ans='n';
    do
    {
        cout<<"Kabul\n";
        cout <<"do you wanna quit?(y/n)\n";
        cin >> ans;
    }while(ans=='n');

    while(ans=='y')
    {
        cout<<"Afghanistan\n";
        cout <<"Continue (y/n)?";
        cin >> ans;
    }

}
