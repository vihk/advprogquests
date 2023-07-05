#include <iostream> 
 #include <iomanip> 
 #include <fstream> 
 #include <string> 
 using namespace std; 
  
 int *count(const string&s) { 
 // SSN is 343 32 4545 and ID is 434 34 4 
 int j = 0; 
 char nums[10]; 
 char so[100]; 
 int occ[10]; 
 strcpy(so,s.c_str()); 
 for (int i = 0; i < 100; i++) { 
 if (isdigit(so[i]) == true) { 
 nums[j] = so[i]; 
 j++; 
 } 
 } 
 for (int i = 0; i < 10; i++) { 
 occ[i] = 0; 
 } 
 for (int i = 0; i < j; i++) { 
  
         
        if (nums[i] == '1') { 
            occ[1] += 1; 
        } 
        if (nums[i] == '2') { 
            occ[2] += 1; 
        } 
        if (nums[i] == '3') { 
            occ[3] += 1; 
        } 
        if (nums[i] == '4') { 
            occ[4] += 1; 
        } 
        if (nums[i] == '5') { 
            occ[5] += 1; 
        } 
        if (nums[i] == '6') { 
            occ[6] += 1; 
        } 
        if (nums[i] == '7') { 
            occ[7] += 1; 
        } 
        if (nums[i] == '8') { 
            occ[8] += 1; 
        } 
        if (nums[i] == '9') { 
            occ[9] += 1; 
        } 
    } 
     
    for (int i = 0; i < 10; i++) { 
        cout << i << ": " << occ[i] << endl; 
    } 
    return occ; 
} 
int main() { 
    const string text = "SSN is 343 32 4545 and ID is 434 34 4323"; 
    int *counts = count(text); 
     
    // IDE doesn't allow me to saw array to pointer. (Disccused with you during exam.) 
     
} 
 
 
 
 
 
//number 2
for (int i = 0; i < 10; i++) { 
        cout << i << ": " << occ[i] << endl; 
    } 
 
 
 
 
 
//number 3
#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <string> 
using namespace std; 
 
 
void dble(int size, int array[], int newarr[]) { 
    int newsize = size*2; 
    for (int i = 0; i < size; i++) { 
        newarr[i] = array[i]; 
        newarr[size + i] = array[i]; 
    } 
} 
int main() { 
    int array[5] = {1,2,3,4,5}; 
    int size = 5; 
    int newarr[10]; 
    dble(size, array, newarr); 
    for (int i = 0; i < 10; i++) { 
        cout << newarr[i] << endl; 
    } 
} 
 
//number 4
#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <string> 
using namespace std; 
 
 
int evenandsize(int size, int array[], int newsize, int newarray) { 
    int newsize; 
    int i = 0; 
    int j = 0; 
    while (i < size) { 
        if (array[i] % 2 == 0) { 
            j++; 
        } 
        i++; 
    } 
    newsize = j; 
    int newarray[newsize]; 
    i = 0; 
    j = 0; 
    while (i < size) { 
        if (array[i] % 2 == 0) { 
            newarray[j] = array[i]; 
            j++; 
        } 
        i++; 
    } 
     
} 
int main() { 
    int size = 5; 
    int array[5] = {1,2,3,4,5}; 
    int newsize; 
    int newarray = evenandsize(size, array, newsize); 
    for (int i = 0; i < newsize; i++) { 
        cout << newarray[i] << endl; 
    } 
} 