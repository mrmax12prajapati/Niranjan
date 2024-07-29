// Write a program that accept two numbers from the user and print equals if the numbers are equal.

#include <iostream>
using namespace std;
int main(){

    // declaring the two number 

    int Number1 = 0;
    int Number2 = 0;

    // now prompt the user

    cout << "Enter Number 1" << '\n';
    cin >> Number1;
    cout << "Enter Number 2" << '\n';
    cin >> Number2;

        if (Number1 == Number2) {
            cout << "Number are Equal" << '\n';
        }
        else {
             cout << "Number are not equal" << '\n';
              } 
           return 0;   

}