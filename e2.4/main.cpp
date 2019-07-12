/*
 • E2.4 Write a program that prompts the user for two integers and then prints
 
 •The sum
 •The difference
 •The product
 •The average
 */

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cout << "Enter integer 1: ";
    cin >> num1;
    cout << "Enter integer 2: ";
    cin >> num2;
    
    cout << "The sum of " << num1 << " and " << num2 << " = " << num1 + num2 << endl;
    cout << "The difference of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "The product of " << num1 << " and " << num2 << " = " << num1 * num2 << endl;
    cout << "The average of " << num1 << " and " << num2 << " = " << (num1 + num2) / 2 << endl;
    
}
