#include <iostream> 
using namespace std;

const char * substring (const char * str, int start, int end){
    int length = end - start+ 1;
    char * sub = new char [length + 1];
    strncpy(sub, str + start, length);
    sub[length] = '\0';
    return sub;
}

bool isPalindrome(const char * const s){
    if (strlen(s) <= 1) //Base case
    return true;

    else if (s[0]!=s[strlen(s)-1]) // Base case (Answer)
    return false;

    else 
    return isPalindrome(substring(s, 1, strlen(s) - 2));

}

int main(){
    const char * str = "level";
    if (isPalindrome(str))
        cout<<str<<" is pallindrome."<<endl;
    else 
        cout<<str<<" is not pallindrome."<<endl;

    return 0;
}
