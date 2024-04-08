// #include <iostream> 
// using namespace std;

// void myfunc (int num){
//     static int temp = 0;
//     temp = temp + num;
//     if (num>0 ){
//         cout<<"k cha sathi "<<endl;
//         myfunc(num - 1);
//         cout<<"The total is "<<temp<<endl;
//     }
// }

// int main(){
//     myfunc(5);
// }

#include <iostream> 
using namespace std;

void myfunc (int num){
    static int temp = 1;
    temp = temp * num;
    if (num>1 ){
        cout<<"k cha sathi "<<endl;
        myfunc(num - 1);
        cout<<"The total is "<<temp<<endl;
    }
}

int main(){
    myfunc(5);
}