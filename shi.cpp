#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double her(double x,double n){
    if(n==0)
    return 1;
    if(n==1)
    return 2*x;
    return 2*x*her(x,n-1)-2*(n-1)*her(x,n-2);
}
double fact(double n){
if(n==0)
return 1;
return n*fact(n-1);
}
int main(){
    ofstream write("sh.dat");

   for(double x=-5; x<=5; x+=0.1){
    write<<x;
    for(double n=0; n<=4; n++){
    double shi=(1/sqrt(pow(2,n)*fact(n)))*pow(1/M_PI, 1/4.0)*exp(-0.5*x*x)*her(x,n);
    
   write<<"  "<<shi;
    }
    write<<endl;
   }
    return 0;
}