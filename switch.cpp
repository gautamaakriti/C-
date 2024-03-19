#include<iostream>
using namespace std;
int main () {
    char ch;
    int a, b;
    cout<<"Enter one operation: + - * / %"<<endl;
    cin>>ch;
    cout<<"Enter any First numbers: "<<endl;
    cin>>a;
    cout<<"Enter any First numbers: "<<endl;
    cin>>b;

    switch(ch){
        case '+':
            cout<<"Addition is: "<<(a+b)<<endl;
            break;
        case '-':
            cout<<"Substraction is: "<<(a-b)<<endl;
            break;
        case '*':
            cout<<"Multiplication is: "<<(a*b)<<endl;
            break;
        case '/':
            cout<<"Quotient is: "<<(a/b)<<endl;
            break;
        case '%':
            cout<<"Reminder is: "<<(a%b)<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
    return 0;
}