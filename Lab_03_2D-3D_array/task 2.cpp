#include <iostream>
using namespace std;

int main() {
    int parking[4][5] = {
        {0, 1, 0, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 1, 1, 0, 1}
    };
    
    int occupied = 0, empty = 0;
    
    cout << "--- Parking Layout ---\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            cout << parking[i][j] << " ";
            if(parking[i][j] == 1) {
                occupied++;
            } else {
                empty++;
            }
        }
        cout << "\n";
    }
    
    cout << "\nTotal occupied spaces: " << occupied;
    cout << "\nTotal empty spaces: " << empty << "\n";
    
    int row, col;
    cout << "\nEnter row (1-4) and column (1-5) to check: ";
    cin >> row >> col;
    
    if(parking[row-1][col-1] == 1) {
        cout << "Status: Space is OCCUPIED.\n";
    } else {
        cout << "Status: Space is AVAILABLE.\n";
    }
    
    cout << "\nTotal Capacity: 20\nCurrent Occupancy: " << occupied << "\n";
    
    return 0;
}
