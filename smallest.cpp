#include <iostream> 
using namespace std;

double min (double array[], int size){
    double min = array[0];
    for(int i = 1; i< size; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int main(){
    double list[] = {1.5, 2.0, 8.0, 1.2, 3.5, 9.9};
    cout<<"The smallest value in the array is: "<<min(list, 10)<<endl;
}