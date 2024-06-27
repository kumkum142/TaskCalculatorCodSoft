#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char say = 'y';

    while (say == 'y' || say == 'Y') {
        int number1, number2;
        char operators;

        cout << "\n\n\t\t CALCULATOR \n\n";
        cout << "In this calculator, you can perform basic operations like \n";
        cout << "\n -> Addition \n -> Subtraction \n -> Multiplication \n -> Division \n -> Power \n\n";

        cout << "Enter number1: ";
        cin >> number1;
        cout << "Enter number2: ";
        cin >> number2;

        cout << "\nNow, choose an operator to perform an operation \n";
        cout << "\n -> For Addition enter \"+\" \n -> For Subtraction enter \"-\" \n -> For Multiplication enter \"*\" \n -> For Division enter \"/\" \n -> For Power enter \"^\" \n\n";

        cout << "\nEnter operator: ";
        cin >> operators;
        cout << endl;

        switch (operators) {
            case '+':
                cout << "Addition of " << number1 << operators << number2 << " is: " << number1 + number2;
                break;
            case '-':
                cout << "Subtraction of " << number1 << operators << number2 << " is: " << number1 - number2;
                break;
            case '*':
                cout << "Multiplication of " << number1 << operators << number2 << " is: " << number1 * number2;
                break;
            case '/':
                if (number2 != 0)
                    cout << "Division of " << number1 << operators << number2 << " is: " << number1 / number2;
                else
                    cout << "Error: Division by zero!";
                break;
            case '^':
                cout << "Power of " << number1 << operators << number2 << " is: " << pow(number1, number2);
                break;
            default:
                cout << "Enter a valid operator!";
                break;
        }

        cout << "\n\nDo you want to calculate again? (y/n): ";
        cin >> say;

        if (say != 'y' && say != 'Y') {
            cout << "Okay, Thank you!\n\tGoodbye!";
        }
    }

    return 0;
}
