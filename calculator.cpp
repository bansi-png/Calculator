#include<iostream>
using namespace std;

class Calculator {
public:
    double a, b;

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiplication(double a, double b) {
        return a * b;
    }

    double division(double a, double b) {
        if (b == 0) {
            cout << "error! infinite!";
        }
        else return a / b;
    }
};

/* Made by Bansi Jhala
Student at GLS University, Ahmedabad, Gujarat, India
email: bansijhala@yahoo.com
instagram: https://www.instagram.com/bansijhala/
linkedin: https://www.linkedin.com/in/bansijhala/
github: https://github.com/bansi-png */

int main() {
    double a, b;
    char c;

    Calculator calc;
    cout << "Calculator initialized. Enter two numbers: " << endl;
    cin >> a >> b;
    calc.a = a;
    calc.b = b;

    cout << "enter arithmetic operation (+, -. *, /): ";
    cin >> c;

    switch (c) {
        case '+':
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiplication(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << calc.division(a, b) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}