#include <iostream>
using namespace std;

int main() {
    int steps;
    int a = 0;
    int b = 1;
    cout<<"Enter the number of step you want to print: "<<endl;
    cin>>steps;
    cout<<a<<" "<<b<< " ";
    for (int i = 1; i <steps; i ++){
        int c = a+b; 
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}