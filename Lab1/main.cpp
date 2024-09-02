#include "roster.h"
#include "studentArray.h"
#include "display.h"
#include <iostream>
#include <fstream>

using namespace std;
const int MAX_SIZE = 100;

int main() {
    studentArray Studentgroup;
    ifstream dataFile;
    string firstname_, lastname_, id_, status_;
    dataFile.open("roster.txt", ios::in);
    if (!dataFile.is_open()) {
        cout << "Error Opening Roster! Please check for document." << endl;
        exit(EXIT_FAILURE);
    }
    studentArray* original_roster = {nullptr};
    string data;
    while (getline(dataFile, data)){
        id = dataFile.
    }
    int choice = 0; 
    while (choice != -1){
        displayManager();  // Call the display menu function
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string firstName, lastName;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter First Name: ";
                cin >> firstName;
                cout << "Enter Last Name: ";
                cin >> lastName;
                //manager.addStudent(Student(id, firstName, lastName));
                break;
            }
            case 2: {
                int id;
                cout << "Enter ID to drop: ";
                cin >> id;
                //manager.dropStudent(id);
                break;
            }
            case 3: {
                //manager.listStudentsByLastName();
                break;
            }
            case 4: {
                //manager.listStudentsByFirstName();
                break;
            }
            case 5: {
                //manager.listStudentsById();
                break;
            }
            case 6: {
                int id;
                string firstName, lastName;
                cout << "Enter ID to update: ";
                cin >> id;
                cout << "Enter new First Name: ";
                cin >> firstName;
                cout << "Enter new Last Name: ";
                cin >> lastName;
                //manager.updateStudent(id, firstName, lastName);
                break;
            }
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0; 
}
