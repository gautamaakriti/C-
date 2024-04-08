#include <iostream>
using namespace std;


int main() {

    char arr [] = {"Hello Class How are you?"};
    int sizearr = sizeof(arr);

    cout<<"The size of array is: "<<sizearr<<endl;
    int countvowel = 0;

    int a = 0, e=0, i=0, u=0;
    for (int i = 0; i< sizearr; i++){
        if (arr[i]=='a' || arr[1] == 'A'||arr[i]=='e' || arr[1] == 'E' || arr[i]=='i' || arr[1] == 'I' || arr[i]=='o' || arr[1] == 'O' || arr[i]=='u' || arr[1] == 'U'){
            countvowel++;
        }
    }
    cout<<countvowel<<endl;
    return 0;
}
