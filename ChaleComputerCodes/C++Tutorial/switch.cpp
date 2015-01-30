#include<iostream>
using namespace std;
int main()
{

    cout <<"Please choose\n";
    cout <<"--------------\n";
    cout <<"1.Exit\n";
    cout <<"2.Print\n";
    cout <<"3.Question\n";
    cout <<"4.Time\n";
    cout <<"--------------\n";
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout <<"Exit\n";
            break;
        case 2:
            cout << "Helo\n";
            break;
        case 3:
            cout <<"What are u doing?"<<endl;
            break;
        case 4:
            cout <<"Time is over!"<<endl;
            break;
        default:
            cout <<"Wrong choice \n";
    }
}
