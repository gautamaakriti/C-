#include <iostream> 
#include <cmath>
using namespace std;

double getFutureInvestmentValue(double PV, double r, int n, int t){
    double FV = PV * pow((1+r/n), n*t);
    return FV;
}
int main() {
    double PV = 100000;
    double r = 0.09;
    int n = 1;
    int t = 5;
    double FV = getFutureInvestmentValue(PV, r, n, t);
    cout<<"Future Investment VAlue: "<<FV<<endl;    
    return 0;
}
