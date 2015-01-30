#include<iostream>
using namespace std;
int main(){
    char ans;
//    for (int i=5;i>0;i--) //to use this line remove the // from the beginning of this line
    for (int i=0; i<5 ; i++) //if you want to use the upper line make this line comment (add // at the beginning)
    {
        cout <<"Is it Friday? (y/n)\n";
        cin >> ans;
        if (ans == 'y')
        {
            cout <<"Don't forget to go for Friday Prayer!\n";
            cout << "i is :"<<i<<endl;

        }
        else if (ans =='n')
        {
             cout <<"You need to work today!\n";
        }
        else
        {
            cout <<"Wrong answer!\n";
        }

    }
    return 0;
}
