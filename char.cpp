#include <iostream>
using namespace std;

int main(){
    char choice;

    do{
        char ch;
        cout<<"Enter a Letter:    ";
        cin >> ch;

        int asciiValue = int(ch);

        cout<< "The value of this letter is: "<< asciiValue <<endl;
        cout << "Do you want to enter another letter? (y/n): ";
        cin >> choice;
        choice = tolower(choice); // Convert the choice to lowercase
    } while (choice == 'y');

    return 0;
}