#include <iostream>
using namespace std;
int fib(int n){
    if(n==0)
     return 0;
     if(n==1)
    return 1;
     return fib(n-1)+fib(n-2);
}

int main(){
    // RECURSIVE
    for(int i=0; i<10; i++){
    cout<<fib(i)<<" ";
    }

cout<<endl;
    // NON RECURSIVE
    int oo=0,c,o=1;
    //oo=0,o=1,1,2,3,5,8,13.....
    for(int i=0; i<5; i++){
        cout<<oo<<", ";
        c=oo+o;
        oo=o;
        o=c;
    }
    return 0;
}