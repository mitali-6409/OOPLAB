#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string course;

public:
    // Default constructor
    Student() {
        rollNumber = 0;
        name = "";
        course = "";
    }

    // Function to take input from the user
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        
        // Clear the input buffer before using getline
        cin.ignore(); 
        
        cout << "Enter Name: ";
        getline(cin, name);
        
        cout << "Enter Course: ";
        getline(cin, course);
    }

    // Display student details
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1;
    
    // Get data from user
    s1.acceptDetails();
    
    // Display the entered data
    s1.displayDetails();
    
    return 0;
}
