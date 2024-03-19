#include <iostream>
#include<cmath>
using namespace std;
int main () {

    int x1, y1, x2, y2;
    float d;

    cout<< "Enter the value of point x1:"; 
    cin>> x1;
    cout<< "Enter the value of point x2:"; 
    cin>> x2;
    cout<< "Enter the value of point y1:"; 
    cin>> y1;
    cout<< "Enter the value of point y2:"; 
    cin>> y2;

    d = pow(pow((x2-x1), 2) + pow ((y2-y1), 2), 0.5);

    cout<<"\nThe distance is:"<<d;


    return 0;
}