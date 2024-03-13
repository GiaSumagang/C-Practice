#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int x = 0;

    x = a + b;

    if(x > 4){
        cout<< "The "<< x << " Is Greater than 4"<<endl;
    }else if(x < 4){
        cout<< "The "<< x <<" Is Less than 4"<<endl;
    }
    else{
        cout<<"The X is Zero"<<endl;
    }
}
