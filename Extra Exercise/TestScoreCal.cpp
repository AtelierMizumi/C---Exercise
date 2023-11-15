#include <iostream>
using namespace std;

int main(){
    
    int numStudents, numTests;
    float testScore, average;
    cout << "How many students are in your class? ";

    cin >> numStudents;
    // create an array of student
    float Student[numStudents]; 
    for (int i = 0; i < numStudents; i++)
    {
        cout << "How many tests did student " << i + 1 << " take? ";
        cin >> numTests;
        float testScore[numTests];
        for (int j = 0; j < numTests; j++)
        {
            cout << "Enter the score for test " << j + 1 << ": ";
            cin >> testScore[j];
        }
        // assign average score to that Student
        average = 0;
        for (int k = 0; k < numTests; k++)
        {
            average += testScore[k];
        }
        average /= numTests;
        Student[i] = average;
    }
    
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student " << i + 1 << " has " << numTests << " tests" << endl;
        cout << "The average score for student " << i + 1 << " is " << Student[i] << endl;
    }

    return 0;
}