#include <iostream>
using namespace std;
int main () {
    
    int floor, room;

    cout << "Enter any floor you wanna go: "; 
    cin >> floor;

    if ( floor == 1){
        cout << "\nWelcome to ground floor, In this floor we have two room"<<endl;
        cout << "Enter any room you wanna go: "; 
                    cin >> room;
        if (room == 1){
            cout << "\nWelcome to 101"<<endl;
        }
        else if (room == 2){
            cout << "\nWelcome to 102"<<endl;
            }
        else {
            cout << "\nthere is no room"<<endl;
        }
    }
    else if ( floor == 2){
            cout << "\nWelcome to 1st floor, In this floor we have two room"<<endl;
            cout << "Enter any room you wanna go: "; 
                        cin >> room;
            if (room == 1){
                cout << "\nWelcome to 201"<<endl;
            }
            else if (room == 2){
                cout << "\nWelcome to 202"<<endl;
                }
            else {
                cout << "\nthere is no room"<<endl;
            }
        }
    else if ( floor == 3){
                cout << "\nWelcome to 2nd floor, In this floor we have two room"<<endl;
                cout << "Enter any room you wanna go: "; 
                            cin >> room;
                if (room == 1){
                    cout << "\nWelcome to 301"<<endl;
                }
                else if (room == 2){
                    cout << "\nWelcome to 302"<<endl;
                    }
                else {
                    cout << "\nthere is no room"<<endl;
                }
            }
    else {
        cout << "\nThere is no floor"<<endl;
    }


    return 0;
        }