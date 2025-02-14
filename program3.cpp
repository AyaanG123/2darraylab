//Ayaan Gill
//2D Array Lab
//2-13-25
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int studentnum;

    cout << "Enter the number of students (1-10): ";
    cin >> studentnum;
    
    int scores[studentnum][3];
    
    srand(time(0));//seeding random number
    for (int i = 0; i < studentnum; i++) {
        for (int x = 0; x < 3; x++) {//nested for loop to loop through array
            scores[i][x] = (rand() % 51 + 50);//generating random number
        }
    }
    
    cout << "Generated Exam Scores Matrix:" << endl;
    cout << "Math English Science" << endl;
    for (int i = 0; i < studentnum; i++) {
        for (int x = 0; x < 3; x++) {
            cout << scores[i][x] << "\t\t";
        }
        cout << endl;
    }
    cout << "" << endl;
    
    double avg[3] = {0.0, 0.0, 0.0};
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < studentnum; x++) {
            avg[i] += scores[x][i];
        }
        avg[i] /= studentnum;
    }
    
    cout << "Average Scores:" << endl;
    cout << " Math: " << fixed << setprecision(2) << avg[0] << endl;
    cout << " English: " << fixed << setprecision(2) << avg[1] << endl;
    cout << " Science: " << fixed << setprecision(2) << avg[2] << endl;
    
    return 0;
}
