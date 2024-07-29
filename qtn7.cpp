// Write a program to accept an integer from user. If the number is even make it odd and print. If the number is odd make it even and print.

#include <iostream>
using namespace std;
int  main(){

    int Number = 0;
    cout << "Enter an integer value" << '\n';
    cin >> Number;
    if (Number % 2 == 0){

         // If number is even, make it odd by adding 1
            Number = Number + 1;
            cout << "Number was even and now it is Odd " << Number << '\n';

    }
    else {
        // if number is odd, make it even by susbtracting 1
        Number = Number - 1;
         cout << "Number was odd and now it is Even " << Number << '\n';
    }


}