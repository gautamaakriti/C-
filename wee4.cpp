#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 6, 0, 30, 10, 33, 9, 77, 18, 44};
    for (int j = 0; j<10; j++){
        for (int i=0; i<10 -1; i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    }

    return 0;
}
    