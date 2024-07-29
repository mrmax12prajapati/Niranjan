#include <iostream>
using namespace std;
int main(){
    int Number = 0;
    cout << " Enter number" << '\n';
    cin >> Number;
    if(Number > 0) {
        cout << "Number is positive" << '\n';
    }
    else{
        cout << "Number is negative" << '\n';
    }
   return 0;
}