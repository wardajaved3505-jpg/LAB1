#include <iostream> 
using namespace std; 
int main() { 
    int marks[10]; 
    int first = -1, second = -1; 
    cout << "Enter 10 marks: "; 
    for (int i = 0; i < 10; i++) { 
        cin >> marks[i]; 
    } 
    for (int i = 0; i < 10; i++) { 
        if (marks[i] > first) { 
            second = first; 
            first = marks[i]; 
        } 
        else if (marks[i] > second && marks[i] != first) { 
            second = marks[i]; 
        } 
    } 
    cout << "1st highest mark = " << first << endl; 
    cout << "2nd highest mark = " << second << endl; 
    return 0; 
}