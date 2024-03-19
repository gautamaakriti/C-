#include <iostream>
using namespace std;
int main () {

    float num1, num2, num3, num4, num5, marks, total;

    cout << "Enter your English mark:"; 
    cin >> num1;
    cout << "Enter your Nepali mark:"; 
        cin >> num2;
    cout << "Enter your Maths mark:"; 
        cin >> num3;
    cout << "Enter your Science mark:"; 
        cin >> num4;
    cout << "Enter your History mark:"; 
        cin >> num5;
    
    total = num1 + num2 + num3 + num4 + num5; 
    cout << "\n Your mark is:"<<total; 

    marks = (total / 500  ) * 100;
    cout << "\n Your mark is:"<<marks; 

    if(marks >= 0 and marks <= 39){
        cout << "\nYou have failed:"<<marks<<endl;
    }
    else if (marks >= 56 and marks <= 70){
            cout << "\nYou have obtain 2nd division:"<<marks<<endl;
    }
    else if (marks >= 71 and marks <= 85){
            cout << "\nYou have obtain 1st division:"<<marks<<endl;
    }
    else if (marks >= 86 and marks <= 90){
                cout << "\nYou have obtain 1st division:"<<marks<<endl;
    }
    else if (marks >= 91 and marks <= 100){
                    cout << "\nYou have obtain Distinction:"<<marks<<endl;
    }
    else {
        cout << "Invalid"<<marks<<endl;
    }
     return 0;
    }
   