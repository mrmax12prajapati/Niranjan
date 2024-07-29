// Write a program to accept an integer from user and print even if the number is even, Otherwise print odd.

#include <iostream>
using namespace std;
int main(){
    int Even_Number = 0;

    cout << "Enter the any number" << '\n';
    cin >> Even_Number;
    if (Even_Number % 2 == 0 ){
        cout << "Number is EVEN" << '\n';
    }
    else{
        cout << "Number is odd" << '\n';
    }
}