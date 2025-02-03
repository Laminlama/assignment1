#include <iostream>
using namespace std;


int sumOfDigits(int num) {
    if (num == 0) 
        return 0;
    return (num % 10) + sumOfDigits(num / 10); 
}

int main() {
    int num;
    
   
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        int result = sumOfDigits(num);
        cout << "The sum of the digits of " << num << " is " << result << "." << endl;
    }

    return 0;
}
