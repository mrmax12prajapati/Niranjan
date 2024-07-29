// Write a program to accept two numbers from user, if the both the numbers are positive, 
// get the remainder of the division by 5 for both the numbers. 
// If remainder of both the division are equal print numbers are equal, 
// otherwise number are not equal. If one or both the numbers are negative, 
// print calculation not possible.

#include <iostream>
using namespace std;
int main(){

    int Number1 = 0;
    int Remainder1 = 0;
    int Number2 = 0;
    int Remainder2 = 0;

    cout << " Enter Number 1: " ;
    cin >> Number1;
      cout << " Enter Number 2: " ;
    cin >> Number2;
    // Check if both numbers are positive
    if(Number1 > 0 && Number2 > 0){
    // Calculate remainder of division by 5 for both numbers
        Remainder1 = Number1 % 5;
        Remainder2 = Number2 % 5;
    
// Compare remainders and print the result
    if(Remainder1==Remainder2) {
         cout << "Numbers are equal" << '\n';
    }
    else{
        cout << " Numbers are not equal" << '\n';
    
    } 
    } else{
        cout << "Calculation not possible" << '\n';
    }
        return 0;

    }

