#include <iostream>
using namespace std;


void reverse () {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;        
        reversed = reversed * 10 + digit; 
        num /= 10;                    
    }

    cout << "Reversed number: " << reversed << endl;
    return ;
}
