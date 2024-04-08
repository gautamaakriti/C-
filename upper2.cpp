#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    } else {
        return ch;
    }
}

int main() {
    char inputChar;
    
    cout<<"Enter an uppercase letter: ";
    cin>>inputChar;
    
    char lowercaseChar = toLowerCase(inputChar);
    
    cout<<"Lowercase letter: "<<lowercaseChar<<endl;
    
    return 0;
}
