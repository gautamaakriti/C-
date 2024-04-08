#include <iostream> 
using namespace std;

int main() {
    char x;
    cout<<"Enter a character: "<<endl;
    cin>>x;
    char ch = toupper(x);
    cout<<ch<<endl;
    return ch;
}

