#include <iostream>
#include <cstring>

using namespace std;

struct Student {
  char firstName[10];
  char lastName[10];
  int id;
  float gpa;
};

void addStudent() {//Method for adding students
  //Create a new entry for a student
  Student add;
  //After you type add
  cout << "Enter a first name" << endl;
  cin >> add.firstName;
  cout << "Enter a last name" << endl;
  cin >> add.lastName;
  cout << "Enter a student ID" << endl;
  cin >> add.id;
  cout << "Enter a GPA" << endl;
  cin >> add.gpa;
  cout << add.firstName << "Last name:" << add.lastName << " ID: " << add.id << " GPA:";
  cout << add.gpa << endl;
  //Add student to vector of students
}

void printStudent() {//Method for printing out students
  cout << "Test" << endl;
  //Print out all students currently stored
  //Ex:
  //Jason Galbraith, 487329, 5.00
  //John Elstad, 903826, 3.25
  //Kevin Jin, 468921, 0.12
  //GPA shown to 2 decimal places
}

void removeStudent() {//Method for deleting students
  int id = 0;
  cout << "Enter the student ID you wish to delete" << endl;
  cin >> id;
  cout << "ID: " << id << endl;
  //Remove that struct from the vector
  //Delete the data
}

int main()
{
  bool stillUsing = true;
  char action = 0;
  while (stillUsing == true) {
    char input = 0;
    cout << "Do you want to add, print, delete a student, or quit? (A/P/D/Q)" << endl;
    cin >> input;
    if (input == 'A') {
      addStudent();
    }
    else if (input == 'P') {
      printStudent();
    }
    else if (input == 'D') {
      removeStudent();
    }
    else if (input == 'Q') {
      stillUsing = false;
    }
    else {
      cout << "That is an invalid option" << endl;
    }
  }
}
