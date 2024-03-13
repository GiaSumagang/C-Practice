#include <iostream>
using namespace std;

int main(){
    string word = "hello ";
    string word1 = "gia";

    for(int i = 0; i < word.length(); i++){
        cout<<word[i];
    }

    for(int i = 0; i < word1.length(); i++){
        cout<<word1[i];
    }
    return 0;
}