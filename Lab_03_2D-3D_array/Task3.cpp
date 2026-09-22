#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    cout << "Matrix A:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] << "  ";
        }
        cout << "\n";
    }
    
    cout << "Matrix B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << B[i][j] << "  ";
        }
        cout << "\n";
    }
    
    cout << "\nSum of Matrix A and B:\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] + B[i][j] << "  ";
        }
        cout << "\n";
    }
    
    return 0;
}
