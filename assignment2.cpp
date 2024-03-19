#include<iostream>
using namespace std;
int main () {
    int year, month;
    cout<<"Enter year:"<<endl;
    cin>>year;
    cout<<"Enter month:"<<endl;
    cin>>month;
    if (year % 4 == 0 and year % 100 != 0 and year % 400 == 0 and month == 2) {
        cout <<"The february month of year "<<year<< " has 29 day"<<endl; }
    else{
        switch(month) {
            case 1:
                cout <<"The january month of year "<<year<< " has 31 day"<<endl;
                break;
            case 2:
                cout <<"The february month of year "<<year<< " has 28 day"<<endl;
                break;
            case 3:
                cout <<"The march month of year "<<year<< " has 31 day"<<endl;
                break;
            case 4:
                cout <<"The april month of year "<<year<< " has 30 day"<<endl;
                break;
            case 5:
                cout <<"The may month of year "<<year<< " has 31 day"<<endl;
                break;
            case 6:
                cout <<"The june month of year "<<year<< " has 30 day"<<endl;
                break;
            case 7:
                cout <<"The july month of year "<<year<< " has 31 day"<<endl;
                break;
            case 8:
                cout <<"The august month of year "<<year<< " has 31 day"<<endl;
                break;
            case 9:
                cout <<"The september month of year "<<year<< " has 30 day"<<endl;
                break;
            case 10:
                cout <<"The octuber month of year "<<year<< " has 31 day"<<endl;
                break;
            case 11:
                cout <<"The november month of year "<<year<< " has 30 day"<<endl;
                break;
            case 12:
                cout <<"The december month of year "<<year<< " has 31 day"<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
    } 
    }
    return 0;
}