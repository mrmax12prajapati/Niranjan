// Write a program to accept three numbers from user and print equals if the numbers are equal.

#include <iostream>
using namespace std;
int main(){

    // first we are declaring the number 

    int Number1 = 0;
    int Number2 = 0;
    int Number3 = 0;

    //Now we are prompt to the user 
    cout << "Enter Number 1 " << '\n';
    cin >> Number1;
    cout << "Enter Number 2" << '\n';
    cin >> Number2;
    cout << "Enter Number 3" << '\n';
    cin >> Number3;

    //now we are checking the number using conditional statement

    if (Number1 == Number2 && Number2 == Number3){
        cout << "Number are Equal" << '\n';
    }
    else { cout << "Number are not Equal" << '\n';
         }
    return 0;
}
