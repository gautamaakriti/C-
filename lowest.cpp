#include <iostream>
using namespace std;
int main () {
    
    int arr[] = {19, 2, 45, 46, 52,};
    int lower = arr[0];
    for (int i = 0; i<5; i++){
        if (arr[i]<= lower){
            lower = arr[i];
        }
    }
    cout<<"The lowest number is: "<<lower;
    return 0;
        }
       

       