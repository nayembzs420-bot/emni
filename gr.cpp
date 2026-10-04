#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double gr(double n){
    if(n==0)
    return 1;
    return 1+1/(gr(n-1));
}
int main(){
    ofstream write("gr.dat");
   for(int i=0; i<100; i++){
   write<<i<<"  "<<gr(i)<<endl;
   }
    return 0;
}