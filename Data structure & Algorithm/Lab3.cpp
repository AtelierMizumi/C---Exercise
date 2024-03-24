#include <bits/stdc++.h>
using namespace std;

struct SV {
    string name;
    float math;
    float physic;
    float language;
};


void input(SV a[], int n);
void output(SV a[], int n);
void insert(SV x, int p, SV a[], int *n);
void search(string name, SV a[], int n);



int main(){
    SV StudentList[100];
    int n = 0;

    while (true) {
        cout << "1. New student" << '\n';
        cout << "2. Print student's result" << '\n';
        cout << "3. Insert new student" << '\n';
        cout << "4. Search a student" << '\n';
        cout << "5. Exit" << '\n';
        int choice;
        cout << "Your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int n;
                cout << "Number of student: ";
                cin >> n;
                input(StudentList, n);
                break;
            }
            case 2: {
                int n;
                cout << "Number of student: ";
                cin >> n;
                output(StudentList, n);
                break;
            }
            case 3: {
                int p;
                int *ptr = &n;
                cout << "Position: ";
                cin >> p;
                SV x;
                cout << "Name: ";
                cin >> x.name;
                cout << "Math: ";
                cin >> x.math;
                cout << "Physic: ";
                cin >> x.physic;
                cout << "Language: ";
                cin >> x.language;
                insert(x, p, StudentList, ptr);
                break;
            }
            case 4: {
                string name;
                cout << "Name: ";
                cin >> name;
                search(name, StudentList, n);
                break;
            }
            case 5: {
                return 0;
            }
        }
    }
    return 0;
}

void input(SV a[], int n){
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << '\n';
        cout << "Name: ";
        cin.ignore();
        getline(cin, a[i].name);
        cout << "Math: ";
        cin >> a[i].math;
        cout << "Physic: ";
        cin >> a[i].physic;
        cout << "Language: ";
        cin >> a[i].language;
    }
}
void output(SV a[], int n){
    for (int i = 0; i < n; i++) {
        if (a[i].name != "") {
            cout << "Student " << i + 1 << '\n';
            cout << "Name: " << a[i].name << '\n';
            cout << "Math: " << a[i].math << '\n';
            cout << "Physic: " << a[i].physic << '\n';
            cout << "Language: " << a[i].language << '\n';
        }
    }
}

void insert(SV x, int p, SV a[], int *n){
    for (int i = *n; i > p; i--) {
        a[i] = a[i - 1];
    }
    a[p-1] = x;
    *n = *n + 1;
}
void search(string name, SV a[], int n){
    for (int i = 0; i < n; i++) {
        if (a[i].name == name) {
            cout << "Student " << i + 1 << '\n';
            cout << "Name: " << a[i].name << '\n';
            cout << "Math: " << a[i].math << '\n';
            cout << "Physic: " << a[i].physic << '\n';
            cout << "Language: " << a[i].language << '\n';
            return;
        }
    }
    cout << "Student found" << '\n';
}