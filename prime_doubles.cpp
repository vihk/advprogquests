#include <iostream> 
#include <iomanip> 
using namespace std; 
 
 
bool isPrime(int); 
int main() { 
    cout << "Fetching Prime Doubles: " << endl;  
    bool isPrimeX; 
    for (int x = 1; x < 1000; x++) { 
    isPrimeX = isPrime(x); 
    if (isPrimeX == true) { 
        x = x+2; 
        isPrimeX = isPrime(x); 
        if (isPrimeX == true) { 
            cout << "(" << (x-2) << "," << (x) << ")" << endl; 
        } 
        } 
    } 
     
} 
 
 
bool isPrime(int x) { 
    for (int i = 2; i <= (x-1); i++) { 
        if (x % i == 0) { 
        return false; 
        } 
    } 
    return true; 
} 