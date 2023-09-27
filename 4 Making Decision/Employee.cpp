// example OOP exercise that manage employee's information (name, email, salary, etc.)

#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        string email;
        int salary;
    public:
        Employee(string name, string email, int salary){
            this->name = name;
            this->email = email;
            this->salary = salary;
        }
        string getName(){
            return name;
        }
        string getEmail(){
            return email;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        void printInfo(){
            cout << "Name: " << name << endl;
            cout << "Email: " << email << endl;
            cout << "Salary: " << salary << endl;
        }
};