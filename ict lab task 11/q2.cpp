#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
private:
    string name;
    int age;

public:
    // Setter methods
    void setName(const string& personName) {
        name = personName;
    }
    void setAge(int personAge) {
        age = personAge;
    }

    // Getter methods
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

    // Virtual method to display information
    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Virtual destructor
    virtual ~Person() {}
};

// Derived class: Employee
class Employee : public Person {
private:
    int employeeID;

public:
    // Setter for employeeID
    void setEmployeeID(int id) {
        employeeID = id;
    }

    // Override displayInfo
    void displayInfo() const override {
        Person::displayInfo(); // Call base class method
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    // Setter for studentID
    void setStudentID(int id) {
        studentID = id;
    }

    // Override displayInfo
    void displayInfo() const override {
        Person::displayInfo(); // Call base class method
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Create objects
    Employee employee;
    Student student;

    string name;
    int age, id;

    // Input for Employee
    cout << "Enter employee's name: ";
    cin >> name;
    cout << "Enter employee's age: ";
    cin >> age;
    cout << "Enter employee's ID: ";
    cin >> id;
    employee.setName(name);
    employee.setAge(age);
    employee.setEmployeeID(id);
    cout << endl;

    // Input for Student
    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter student's ID: ";
    cin >> id;
    student.setName(name);
    student.setAge(age);
    student.setStudentID(id);
    cout << endl;

    // Display information
    cout << "Employee Information:" << endl;
    employee.displayInfo();
    cout << endl;

    cout << "Student Information:" << endl;
    student.displayInfo();
    cout << endl;

    return 0;
}

