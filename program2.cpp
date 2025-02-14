//Ayaan Gill
//2D Array Lab
//2-13-25
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    int rowsum = 0;
    int colsum = 0;
    cout << "Enter the size of the matrix (1-10): ";
    cin >> n;
    
    int maths[n][n];
    
    srand(time(0));//seeding random number
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n; x++) {//nested for loop to loop through array
            maths[i][x] = 1 + (rand() % 100);//generating random number
        }
    }
    
    cout << "Generated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n; x++) {
            cout << maths[i][x] << " ";
        }
        cout << endl;
    }
    cout << "" << endl;
    
    cout << "Sum and Average per Row: " << endl;
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n; x++) {
            rowsum += maths[i][x];
        }
        double rowavg = rowsum / n;
        cout << "Row " << i + 1 << ": Sum = " << rowsum << ", Average = " << fixed << setprecision(2) << rowavg << endl;//setprecision rounds it
    }
    cout << "" <<endl;
    
    cout << "Sum and Average per Column: " << endl;
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n; x++) {
            colsum += maths[i][x];//adding to the sum
        }
        double colavg = colsum / n;
        cout << "Row " << i + 1 << ": Sum = " << colsum << ", Average = " << fixed << setprecision(2) << colavg << endl;
    }
    
    
    
    return 0;
}
