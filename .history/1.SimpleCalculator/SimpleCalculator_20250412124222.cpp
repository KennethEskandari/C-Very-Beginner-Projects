#include <iostream>
using namespace std;

//Main 
int main() { 
    float num1, num2;
    int choice;

    cout << "Enter Number 1";
    cin >> num1;

    cout << "Enter Number 2";
    cin >> num2;

    cout << "Choose Operation\n";
    cout << "1.Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter Choice";
    cin >> choice;

    float result;
}


//Functions
float add( float a, float b) { 
    return a + b;
}

float subtract( float a, float b) {
    return a - b; 
}

float multiply( float a, float b) { 
    return a * b; 
}

float divide (float a, float b) { 
    if (b == 0) { 
        cout << "Cannot Divide By Zero" << endl;
        return 0;
    }
    return a / b; 
}

