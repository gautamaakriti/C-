#include <iostream>
using namespace std;

int main() {
    int num_students, score, highest_score;
    cout << "Enter the number of students: ";
    cin >> num_students;

    highest_score = 0;

    for(int i = 0; i < num_students; ++i) {
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> score;
        if (score > highest_score) {
            highest_score = score;
        }
    }
    cout << "The highest score is: " << highest_score <<endl;
    return 0;
}