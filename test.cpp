#include <iostream>
using namespace std;
int main(){
    int num, min=0;

    for(int i=0; i<5; i++){
        cin>>num;
        if(min!=0 && num%2!=0){
        min=num;
    } else if(num<min && num%2!=0){
                min=num;
    }
    }
if(min){
    cout<<"Minimum nupmber is "<<min;
} else {
    cout<<"No odd number found";
}
    return 0;
}