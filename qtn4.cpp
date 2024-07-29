// Write a program to accept three numbers from user and print all are divisible by 9, if all three numbers are divisible by 9.

#include <iostream>
using namespace std;
int main(){
    int Number1 = 0;
    int Number2 = 0;
    int Number3 = 0;

    cout << "Enter Number 1" << '\n';
    cin >> Number1;
    cout << "Enter Number 2" << '\n';
    cin >> Number2;
    cout << "Enter Number 3" << '\n';
    cin >> Number3;
    if( Number1 % 9 == 0 && Number2 % 9 == 0 && Number3 % 9 == 0){
        cout << "All number are divisible by 9" << '\n';
    }
    else{
        cout<< "Not all number are divisible 9" << '\n';

    }
    return 0;
}
