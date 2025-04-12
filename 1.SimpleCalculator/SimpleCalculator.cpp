#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    float result;

    switch(choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
