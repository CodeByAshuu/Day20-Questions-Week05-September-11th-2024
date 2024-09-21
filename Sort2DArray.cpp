#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;
    
    int array[n][m];
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    int size = n * m;
    int flat_array[size];
    
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            flat_array[index++] = array[i][j];
        }
    }
    
    sort(flat_array, flat_array + size);
    
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = flat_array[index++];
        }
    }
    
    cout << "Sorted matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
