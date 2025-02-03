#include <iostream>
#include <cmath>
using namespace std;


int countDigits(int num) {
    return (num == 0) ? 0 : 1 + countDigits(num / 10);
}


bool isPalindromeHelper(int num, int divisor) {
    if (num < 10)  
        return true;
    
    int firstDigit = num / divisor;  
    int lastDigit = num % 10;        

    if (firstDigit != lastDigit) 
        return false;

   
    int newNum = (num % divisor) / 10;  
    return isPalindromeHelper(newNum, divisor / 100);
}


bool isPalindrome(int num) {
    if (num < 0) return false; // Negative numbers are not palindromes

    int digitCount = countDigits(num);
    int divisor = pow(10, digitCount - 1);

    return isPalindromeHelper(num, divisor);
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
