#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;
    
    int image[n][m];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    cout << "Rotated matrix by 90 degrees: " << endl;
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
