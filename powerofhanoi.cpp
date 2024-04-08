#include <iostream>
using namespace std;


void towerOfhanoi (int plate, char src, char aux, char dest){
    if(plate == 1){
        cout<<"Move disk"<<plate<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    towerOfhanoi(plate-1, src, dest, aux);
    cout<<"Move disk"<<plate<<" from "<<src<<" to "<<dest<<endl;
    towerOfhanoi(plate-1, aux, src, dest);
}


int main() {

    towerOfhanoi(3,'S', 'A', 'D');
    return 0;
}