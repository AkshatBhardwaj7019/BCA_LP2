#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string Name;
    int Age;
    string City;
    int academicFee;

public:
    void get() {
        cout << "Enter student's name: ";
        cin >> Name;
        cout << "Enter student's age: ";
        cin >> Age;
        cout << "Enter student's city: ";
        cin >> City;
        cout << "Enter academic fee: ";
        cin >> academicFee;
    }

    void display() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "City: " << City << endl;
        cout << "Academic Fee: " << academicFee << endl;
    }
};

class Transport : public Student {
private:
    int route;
    int busFee;

public:
    Transport() {
        cout << "Enter route number: ";
        cin >> route;
        cout << "Enter bus fee: ";
        cin >> busFee;
    }

    void show() {
        cout << "Route: " << route << endl;
        cout << "Bus Fee: " << busFee << endl;
    }
};

int main() {
    Transport studentTransport;
    studentTransport.get();
    cout << "Student Details:" << endl;
    studentTransport.display();
    cout << "Transport Details:" << endl;
    studentTransport.show();
    return 0;
}