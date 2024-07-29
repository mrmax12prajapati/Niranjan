// Write a program that accept an integer form user and print positive, if the integer is positive.

#include <iostream>
using namespace std;
int main(){

    int num;
//    promt the user to enter an integer
   cout << "Enter An Integer";
   cin >> num;
//    now we are checking the result by using the conditional statement 
       if (num>0) {
       cout << " Positive " << '\n';
        }
        else{
            cout << "Negative" << '\n';
        }
   return 0;
}   