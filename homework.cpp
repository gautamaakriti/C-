#include <iostream>
using namespace std;

int main() {

    char arr[] = {'a', 'a', 'b', 'b', 'c', 'c', 'd', 'e', 'e', 'f'};
    string uniqueChars = "";
    int arrsize = sizeof(arr);
    
    for (int i = 0; i < arrsize; ++i) {
        char currentChar = arr[i];
        bool isUnique = true;

        for (int j = 0; j < i; ++j) {
            if (arr[j] == currentChar) {
                isUnique = false;
                break;
            }
        }


        if (isUnique) {
            uniqueChars += currentChar;
        }
    }

    cout << "Array with repeated characters removed: " << uniqueChars << endl;

    return 0;
}
    