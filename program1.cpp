//Ayaan Gill
//2D Array Lab
//2-13-25
//Finding minumum value as well
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    int rows;
    int columns;
    cout << "Enter the number of rows (1-5): ";
    cin >> rows;
    cout << "Enter the number of columns (1-5): ";
    cin >> columns;
    
    int matrix [rows] [columns];//making 2d array with variables
    
    srand(time(0));//seeding random number
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {//nested for loop to loop through array
            matrix[i][x] = 1 + (rand() % 50);//generating random number
        }
    }
    
    cout << "Generated Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {
            cout << matrix[i][x] << " ";
        }
        cout << endl;
    }
    
    int maxval = matrix[0][0];
    int maxrow = 0;
    int maxcol = 0;
    int minval = matrix[0][0];
    int minrow = 0;
    int mincol = 0;

    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {
            if (matrix[i][x] > maxval) {
                maxval = matrix[i][x];
                maxrow = i;
                maxcol = x;
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {
            if (matrix[i][x] < minval) {
                minval = matrix[i][x];
                minrow = i;
                mincol = x;
            }
        }
    }
    
    cout << "Maximum Element: " << endl;
    cout << " Value: " << maxval << endl;
    cout << " Row: " << maxrow << endl;
    cout << " Column: " << maxcol << endl;
    
    cout << "Minimum Element: " << endl;
    cout << " Value: " << minval << endl;
    cout << " Row: " << minrow << endl;
    cout << " Column: " << mincol << endl;

    return 0;
}
