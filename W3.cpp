#include <iostream>
using namespace std;

int main() {
    int num, temp;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for (int i = 1; i <= 10; i++) {
        temp = num * i;
       cout <<"R"<<i<<": "<<num<<" * "<<i<<" = "<< temp<<endl;
    }
    return 0;
}