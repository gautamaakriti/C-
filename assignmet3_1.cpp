#include <iostream> 
using namespace std;

void nPrint (char c, int n) {
    for (int i = 1; i <= n; ++i){
        cout<<c;
    }
    cout << endl;
}
int main() {
    nPrint('a', 4);
    return 0;
}
