#include <iostream>
using namespace std;

//Skeleton
int main() { 
    return 0;
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

