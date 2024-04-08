#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int iteration_count = 0;
    int count = 5;

    cout<<"Enter a number: ";
    cin>>n;
    while(count<n){
        count = count + 3;
        iteration_count ++;
    }
    cout<<"The total iteration is: "<<iteration_count;

    return 0;
}