#include <iostream>
using namespace std;
int main () {
    
    int d1, d2, number, new_number;

    cout << "Enter any two digit number:"; 
    cin >> number;

    d1 = number/10;
    d2 = number%10;
    new_number = (d2 *10) + (d1 * 1);
    cout <<new_number<<endl;
        
    if (number == new_number){
        cout << "\nIt is palindrome number. "<<endl;
    }
    else {
        cout << "\nIt is not palindrome number. "<<endl;
    }


    return 0;
        }
       

       