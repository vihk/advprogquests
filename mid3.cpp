//number 1
#include <iostream> 
#include <iomanip> 
using namespace std; 
int* doubleCapacity (const int* list, int size) { 
    int newsize = (size*2); 
    int* newarray; 
    newarray = new int[newsize]; 
    for (int i = 0; i < size; i++) { 
        newarray[i] = list[i]; 
    } 
    for (int i = 0; i < size; i++) { 
        newarray[size+i] = list[i]; 
    } 
    return newarray; 
} 
int main() { 
    int* array; 
    int elements; 
    int* dble; 
    cout << "Enter number of elements: " << endl; 
    cin >> elements; 
    array = new int[elements]; 
    for (int i = 0; i < elements; i++) { 
        cout << (i+1) << ": "; 
        cin >> array[i]; 
        cout << endl; 
    } 
    cout << "ELEMENTS ENTERED:" << endl; 
    for (int i = 0; i < (elements); i++) { 
        cout << array[i] << ","; 
    } 
    cout << endl << endl; 
    dble = doubleCapacity(array, elements); 
    cout << "DOUBLED." << endl << endl; 
    cout << "{"; 
    for (int i = 0; i < (elements*2); i++) { 
        cout << dble[i] << ","; 
    } 
    cout << "}" << endl; 
} 
 
 
//number 2
#include <iostream> 
#include <iomanip> 
using namespace std; 
void swapReference(int &one, int &two) { 
    int temp; 
    temp = one; 
    one = two; 
    two = temp; 
} 
void swapPointers(int* &onePtr, int*  &twoPtr) { 
    int *temp; 
    temp = onePtr; 
    onePtr = twoPtr; 
    twoPtr = temp; 
} 
int main() { 
    int one, two; 
    int *onePtr; 
    int *twoPtr; 
    onePtr = &one; 
    twoPtr = &two; 
    cout << "Enter two integers:" << endl; 
    cin >> one; 
    cin >> two; 
    cout << "You entered: One: " << one << " - Two: " << two; 
    cout << endl; 
    cout <<endl; 
    cout << "SWAPPED (reference)" << endl; 
    swapReference(one, two); 
    cout << "One: " << one << " - Two: " << two; 
    cout << endl; 
    cout << endl << endl; 
    swapPointers(onePtr, twoPtr); 
    cout << "SWAPPED (pointers)" << endl; 
    cout << "One: " << *onePtr << " - Two: " << *twoPtr; 
    cout << endl; 
    cout << endl << "Swapping pointers to integers" << endl << endl; 
// doesn’t need swap func. 
    cout << "One: " << onePtr << "  Two: " << twoPtr; 
} 
 
 
//number 3
#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
int cstrCount(char* cstring) { 
    int x = 0; 
    for (int i = 0; i < strlen(cstring); i++) { 
        if (cstring[i] > 0) { 
             x++; 
        } 
    } 
    return (x); 
} 
 
 
int main() { 
    string cstr; 
    int size; 
    char *cstring; 
    cout << "Enter a string: (whitespace counted)" << endl; 
    getline(cin,cstr); 
    size = cstr.size(); 
    cstring = new char[size]; 
    strcpy(cstring, cstr.c_str()); 
    cout << "COUNT: " << cstrCount(cstring) << endl; 
} 
 
 
 
 