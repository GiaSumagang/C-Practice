#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a Number: ";

    cin>> number;

    if( number % 2 == 0){
        cout<< number << " is a Even number"<< endl;
    } else {
        cout<< number <<" is odd"<<endl;
    }

    return 0;
}