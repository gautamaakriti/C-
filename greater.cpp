#include <iostream>
using namespace std;
int main () {

    int a , b, c;

    cout << "Enter your numbers:"; 
        cin >> a>>b>>c;
        
        if(a>b and b>c){
            cout << "\n"<<a<<b<<c<<endl;
        }
        else if(a>c and c>b){
            cout << "\n"<<a<<c<<b<<endl;
        }
        else if(b>c and c>a){
            cout << "\n"<<b<<c<<a<<endl;
        }
        else if(b>a and a>c){
            cout << "\n"<<b<<a<<c<<endl;
        }
        else if(c>b and b>a){
            cout << "\n"<<c<<b<<a<<endl;
        }
        else if (c>a and a>b){
            cout<< "\n"<<c<<a<<b<<endl;
        } 
        else {
            cout<< "\n Invalid"<<endl;
        }      

return 0;
    }
   