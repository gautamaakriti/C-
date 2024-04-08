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
    double list[10];
    cout<<"Enter 10 numbers: "<<endl;
    for (int i=0; i< 10; i++){
        cin>>list[i];
    }
    cout<<"The minimum value is: "<<min(list, 10)<<endl;
    return 0;
}