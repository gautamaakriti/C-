#include <iostream>
using namespace std;
int main () {

    int loan;

    cout << "Enter your loan:"; 
    cin >> loan;
    
    if(loan >= 0 and loan <= 10000){
        cout << "\nYou cannot apply loan:"<<loan<<endl;
    }
    else if (loan >= 1001 and loan <= 200000){
            cout << "\nYou will have to pay 0.1 percent interest."<<loan<<endl;
    }
    else if (loan >= 200001 and loan <= 500000){
            cout << "\nYou will have to pay 0.5 percent interest."<<loan<<endl;
    }
    else if (loan >= 500001 and loan <= 1000000){
                cout << "\nYou will have to pay 0.7 percent interest."<<loan<<endl;
    }
    else if (loan > 1000000){
                    cout << "\nSorry cannot provide you loan"<<loan<<endl;
    }
    else {
        cout << "Invalid"<<loan<<endl;
    }
     return 0;
    }
   