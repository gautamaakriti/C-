#include <iostream>
using namespace std;

int main() {
    for (int j = 0; j<= 5; j++){
        for (int i = 5 ; i >= j; i--) {
        cout<<" * ";
        }
    cout<<endl;
    }
    for (int j = 1; j<= 5; j++){
        for (int i = 1; i <= (j +1); i++) {
        cout<<" * ";
        }
    cout<<endl;
    }
    return 0;
}