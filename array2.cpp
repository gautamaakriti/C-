#include <iostream>
using namespace std;
    
int main() {

    // int arr[5] = {1, 2, 3, 4, 5};
    // int copy[5];
    // for (int i = 0; i<5; i++){
    //     copy[i] = arr[i];
    // }
    // for (int i = 4; i>=0; i--){
    //     cout<<copy[i]<<endl;
    // }

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/4;
    for (int i = 0; i<(size/2); i++){
        int tempt = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1- i] = tempt;        
    } 
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
