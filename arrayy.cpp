#include <iostream>
using namespace std;
    void sumitem(){
        int sum = 0;
        int arr[5];
        for (int i = 0; i< 5; i++){
            cout<<"Enter the integer at "<<i<<" : "<<endl;
            cin>>arr[i];
            sum += arr[i];
        }
        cout<<"The sum of the integer is: "<<sum<<endl;
    }
    
int main() {

    sumitem();
    
    return 0;
}
