#include <iostream> 
#include <iomanip> 
using namespace std; 
 
 
int main() { 
    int decimal; 
    int binary[8] = {0,0,0,0,0,0,0,0}; 
    cout << "\n--------------------------------------" << endl; 
    cout << "EIGHT BIT ** DECIMAL -> BINARY ( +2s Complement ) ** CONVERSION" << endl; 
    cout << "--------------------------------------" << endl << endl; 
     
    cout << "Please enter an integer: " << endl; 
    cin >> decimal; 
    // Decimal value input. 
    cout << "\nThe Binary representation of " << decimal << " is: "; 
    // Conversion to Binary 
    for (int i = 0; decimal > 0; i++) { 
        binary[i] = decimal%2; 
        decimal = decimal/2; 
    } 
    for (int i = 7; i >= 0; i--) { 
        cout << binary[i]; 
    } 
    cout << endl << "The Two's complement is: "; 
    // Conversion to 2's Complement (1 -> 0, 0 -> 1) 
    for (int i = 0; i < 8; i++) { 
        if (binary[i] == 0) { 
            binary[i] = 1; 
        } 
        else { 
            binary[i] = 0; 
        } 
    } 
    int remainder = 1; 
     
    // Addition of 1 to 2's Complement. 
    // -- Subtraction is possible by reversing 0 -> 1, 1 -> 0 conversion values.s 
     
for (int i = 0; i < 8; i++) { 
    if (binary[i] == 1 && binary[i+1] == 0) { 
        binary[i] = 0; 
        binary[i+1] = 1; 
        remainder = 0; 
        break; 
    } 
    else if (binary[i] == 0) { 
        binary[i] = 1; 
        break; 
    } 
} 
    for (int i = 7; i >= 0; i--) { 
        cout << binary[i]; 
    } 
    cout << endl << endl; 
} 