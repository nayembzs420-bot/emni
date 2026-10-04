#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double dfact(double n){
    if (n==0 || n==-1)
    return 1;
    return n*dfact(n-2);
}
double erk(double x, double m){
    double erk=0;
    for(double k=0; k<=m; k++){
        erk+=(2*exp(-x*x)/sqrt(M_PI))*pow(2,k)*pow(x,2*k+1)/dfact((2*k+1));
    }
    return erk;
}
int main(){
    ofstream write("ek.dat");

    for(double i=-2; i<=2; i+=0.1){
        write<<i<<" "<<erk(i,20)<<endl;
    }
    cout<<erk(2,20);
    return 0;
}