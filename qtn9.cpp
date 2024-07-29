/*
Write a program that print the current balance of the account, ask the user to enter the withdrawal amount.

if withdrawal amount is less than current balance,
deduct the withdrawal amount form the current balance, 
if current balance after deduction is less than 500 INR, 
deduct penalty of 50 INR and print current balance and penalty.
otherwise, print the current balance.
If withdrawal amount is greater than current balance, print insufficient funds.
Sample run 1
Current balance = 5000
Enter withdrawal amount - 4600
Current balance = 350
Penalty = 50

Sample run 2
Current balance = 5000
Enter withdrawal amount - 4500
Current balance = 500

Current balance = 5000
Enter withdrawal amount - 5600
insufficient funds*/
#include <iostream>
using namespace std;

int main() {
    int currentBalance = 5000;
    int withdrawalAmount = 0;
    const int penalty = 50;
    int newBalance = 0;

    // Print current balance
    cout << "Current balance = " << currentBalance << " INR" << '\n';

    // Ask user to enter withdrawal amount
    cout << "Enter withdrawal amount: " << '\n';
    cin >> withdrawalAmount;

    // Check if withdrawal amount is less than current balance
    if (withdrawalAmount <= currentBalance) {
        // Deduct withdrawal amount from current balance
        newBalance = currentBalance - withdrawalAmount;

        // Check if new balance is less than 500 INR
        if (newBalance < 500) {
            // Apply penalty
            newBalance -= penalty;
            cout << "Current balance = " << newBalance << " INR" << '\n';
            cout << "Penalty = " << penalty << " INR" << '\n';
        } else {
            cout << "Current balance = " << newBalance << " INR" << '\n';
        }
    } else {
        // Insufficient funds
        cout << "Insufficient funds" << '\n';
    }

    return 0;
}
