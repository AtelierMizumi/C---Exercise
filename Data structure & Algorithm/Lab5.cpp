#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct SV {
    string name;
    float math, physic, language;
    SV* next;
};

SV* head = NULL;
SV* tail = NULL;

string RandomStudentName();
SV* RandomStudent();
void AddFirst(SV* student);
void Print();
void AddLast(SV* student);
void toFile();

int main() {
    AddFirst(RandomStudent());
    AddFirst(RandomStudent());
    AddFirst(RandomStudent());

    Print();
    toFile();

    return 0;
}

SV* RandomStudent() {
    SV* student = new SV;
    student->name = RandomStudentName();
    student->math = rand() % 11;
    student->physic = rand() % 11;
    student->language = rand() % 11;
    student->next = NULL;
    return student;
}

string RandomStudentName() {
    std::string names[6] = {"Huy", "Tuan", "Hieu", "Hien", "Khanh", "Hoa"};
    return names[rand() % 6];
}

void AddFirst(SV* student) {
    if (head == NULL) {
        head = student;
        tail = student;
    } else {
        student->next = head;
        head = student;
    }
}

void Print() {
    SV* temp = head;
    while (temp != NULL) {
        cout << "Name: " << temp->name << endl;
        cout << "Math: " << temp->math << endl;
        cout << "Physic: " << temp->physic << endl;
        cout << "Language: " << temp->language << endl;
        temp = temp->next;
    }
}

void AddLast(SV* student) {
    if (head == NULL) {
        head = student;
        tail = student;
    } else {
        tail->next = student;
        tail = student;
    }
}

void toFile() {
    ofstream file;
    file.open("data.txt");
    file << "Name Math Physic Language" << endl;
    SV* temp = head;
    while (temp != NULL) {
        file << temp->name << " " << temp->math << " " << temp->physic << " " << temp->language << endl;
        temp = temp->next;
    }
    file.close();
}
