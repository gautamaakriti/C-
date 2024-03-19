#include <iostream>
using namespace std;
#include <limits> // For numeric_limits

int main(){

    float area, r, pi = 3.14;
    cout<<"Enter the radius of a circle in cm: "<<endl;
    cin>>r;
    if (r<0) {
        cout<<"Invalid raidus input"<<endl;
    }
    else {
        area = pi * r * r;
        cout<<"The area of a circle is: "<<area<<"cm sq."<<endl;
    }
 return 0;
} 