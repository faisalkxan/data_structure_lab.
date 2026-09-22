#include <iostream>
#include <string>
using namespace std;

int main() {
    int marks[6][4];
    string subjects[4] = {"English", "Mathematics", "Programming", "AI"};
    
    cout << "Enter marks for 6 students in 4 subjects:\n";
    for(int i = 0; i < 6; i++) {
        cout << "Student " << i + 1 << ":\n";
        for(int j = 0; j < 4; j++) {
            cout << subjects[j] << ": ";
            cin >> marks[i][j];
        }
    }
    
    cout << "\n--- Marks Table ---\n";
    for(int i = 0; i < 6; i++) {
        cout << "Student " << i + 1 << ": ";
        for(int j = 0; j < 4; j++) {
            cout << marks[i][j] << " ";
        }
        cout << "\n";
    }
    
    int highestTotal = 0;
    int topStudent = 0;
    
    cout << "\n--- Total and Average Marks ---\n";
    for(int i = 0; i < 6; i++) {
        int total = 0;
        for(int j = 0; j < 4; j++) {
            total += marks[i][j];
        }
        double avg = total / 4.0;
        cout << "Student " << i + 1 << " - Total: " << total << ", Average: " << avg << "\n";
        
        if(total > highestTotal) {
            highestTotal = total;
            topStudent = i + 1;
        }
    }
    
    cout << "\n--- Highest Marks per Subject ---\n";
    for(int j = 0; j < 4; j++) {
        int highest = marks[0][j];
        for(int i = 1; i < 6; i++) {
            if(marks[i][j] > highest) {
                highest = marks[i][j];
            }
        }
        cout << subjects[j] << ": " << highest << "\n";
    }
    
    cout << "\nStudent with highest total marks is Student " << topStudent << " with " << highestTotal << " marks.\n";
    
    return 0;
}
