#include <iostream> 
#include <iomanip> 
using namespace std; 
 
 
const int size = 20; 
 
 
void getAnswers(char array[]); 
void checkCorrect(char key[], char answers[], int questions[]); 
void printIncorrect(int array[], int incorrect); 
 
 
int main() { 
    int questions[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
    char key[size] = {'A', 'D', 'B', 'B',  'C',   'B',   'A',   'B',   'C',   'D',  'A',   'C',   'D',   'B',   'D',   'C',   'C',   'A',   'D',   'B'}; 
    char answers[size]; 
    getAnswers(answers); 
    checkCorrect(key, answers, questions); 
} 
void getAnswers(char array[]) { 
    char ans; 
    for (int i = 0; i < (size); i++) { 
        cout << "Enter your answer (in Uppercase) for question (" << (i+1) << "):" << endl; 
        cin >> ans; 
        if (ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D') { 
            array[i] = ans; 
        } 
        else { 
            cout << "Enter either A, B, C, or D."; 
            cin >> array[i]; 
        } 
    } 
} 
void printIncorrect(int array[], int incorrect) { 
    for (int i = 0; i < incorrect; i++) { 
        cout << array[i] << ","; 
    } 
} 
 
 
void checkCorrect(char key[], char answers[], int questions[]) { 
    int answersCorrect = 0; 
    int answersIncorrect = 0; 
    int array[15]; 
    int j = 0; 
    for (int i = 0; i < (size); i++) { 
        if (key[i] == answers[i]) { 
            answersCorrect++; 
        } 
        else { 
            answersIncorrect++; 
            array[j] = questions[i]; 
            j++; 
        } 
    } 
    cout << "# OF INCORRECT: " << answersIncorrect << endl; 
    cout << "# OF CORRECT: " << answersCorrect << endl; 
    cout << "Questions # that were incorrect: "; 
    printIncorrect(array, answersIncorrect); 
     
    if (answersCorrect >= 15) { 
        cout << endl; 
        cout << "You passed and scored: " << answersCorrect << "/" << size; 
    } 
    else { 
        cout << endl; 
        cout << "You did not pass and scored: " << answersCorrect << "/" << size << endl; 
    } 
} 
 
 
 
 
 
//number 2
#include <iostream> 
#include <iomanip> 
using namespace std; 
const int size = 7; 
void selectionSort(int array[], int size); 
void printArray(int array[]); 
  
  
  
  
int main() { 
    int array[size]; 
     
    for (int i = 0; i < size; i++) { 
        cout << "Enter values (" << (i+1) << "): "; 
        cin >> array[i]; 
    } 
    selectionSort(array, size); 
     
     
} 
void printArray(int array[]) { 
    for (int i = 0; i < size; i++) { 
        cout << array[i] << endl; 
    } 
} 
  
  
  
  
void selectionSort(int array[], int size) 
{ 
   int startScan, minIndex, minValue; 
    
    for (startScan = 0; startScan < 4; startScan++) 
   { 
       minIndex = startScan; 
       minValue = array[startScan]; 
       cout << "PASS (" << startScan << "): " << endl; 
       printArray(array); 
         
       for(int index = startScan + 1; index < size; index++) 
       { 
             
           if (array[index] < minValue) 
           { 
               minValue = array[index]; 
               minIndex = index; 
           } 
       } 
       array[minIndex] = array[startScan]; 
       array[startScan] = minValue; 
   } 
    cout << "MEDIAN FOUND: " << array[3] << endl; 
      
} 
 
 
 
 
 
 
 
 
//number 3
 
#include <iostream> 
#include <iomanip> 
using namespace std; 
const int size = 4; 
bool diagonalsEqual(const int m[][size]); 
 
 
int main() { 
     
    int array[4][4]; 
     
    for (int i = 0; i < (size); i++) { 
        for (int j = 0; j < (size); j++) { 
            cout << "Enter value for Column: (" << (i+1) << ")" << " Row: (" << (j+1) << ")" << endl; 
            cin >> array[j][i]; 
        } 
    } 
     
     
    for (int i = 0; i < (size); i++) { 
           for (int j = 0; j < (size); j++) { 
               cout << array[j][i]; 
           } 
        cout << endl; 
       } 
    cout << endl; 
    if (diagonalsEqual(array) == true) { 
        cout << "The Diagonals are equal."; 
    } 
    else { 
        cout << "The Diagonals are not equal.";  
    } 
     
     
         
} 
 
 
bool diagonalsEqual(const int m[][size]) { 
    int numberOne, numberTwo; 
    numberOne = m[0][0] + m[1][1] + m[2][2] + m[3][3]; 
    numberTwo = m[3][0] + m[2][1] + m[1][2] + m[0][3]; 
    if (numberOne == numberTwo) { 
        return true; 
    } 
    else { 
        return false; 
    } 
} 