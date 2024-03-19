#include <iostream>
using namespace std;
int main () {
    int year;
    cout << "Enter a year to check westher it is leap year or not:"; 
    cin >> year;

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout << "\nIt is leapyear"<<endl;
            }
            else {
                cout << "\nIt is not a leapyear."<<endl;
            }
        }
        else {
            cout << "\nIt is leapyear."<<endl;
            }
        }
    else {
        cout << "\nIt is not a leapyear."<<endl;
    }

    return 0;
        }
       

