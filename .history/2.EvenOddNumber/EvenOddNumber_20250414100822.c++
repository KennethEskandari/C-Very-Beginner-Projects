#include <iostream>
using namespace std;

int main(); {
    int number; //Declaring Variable

    cout << "Enter A Number"; //Asking User For Input
    cin >> number;

    //Using Modules to Ensure Even Or Odd
    if (number % 2 == 0 ) { 
        cout << number << 'Is Even' << endl;
    } else {
        cout << number << 'Is Odd' << endl.;
    }

    

    return 0;
            
}

