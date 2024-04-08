#include <iostream>
using namespace std;
char toUpperCase(char ch);

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    char uppercaseCh = toUpperCase(ch);
    cout << "Uppercase: " << uppercaseCh << endl;
    
    return 0;
}

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32; 
    } else {
        return ch; \
    }
}