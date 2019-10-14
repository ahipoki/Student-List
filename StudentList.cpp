#include <iostream>
#include <cstring>

using namespace std;

struc student {
  char firstName[];
  char lastName[];
  int id;
  float gpa;
};

void add() {//Method for adding students
  //Create a new entry for a student
  //After you type add {
    cout << "Enter a first name" << endl;
    cout << "Enter a last name" << endl;
    cout << "Enter a student ID" << endl;
    cout << "Enter a GPA" << endl;
    //Add student to vector of students
  //}
}
//8:37

void print() {
//Method for printing out students
  //Print out all students currently stored
  //Ex:
  //Jason Galbraith, 487329, 5.00
  //John Elstad, 903826, 3.25
  //Kevin Jin, 468921, 0.12
  //GPA shown to 2 decimal places
}

void delete() {
//Method for deleting students
  cout << "Enter the student ID you wish to delete" << endl;
  //Remove that struct from the vector
  //Delete the data
}

int main()
{
  char input = 0;
  cout << "Do you want to add, print, or delete a student? (A/P/D)" << endl;
  cin >> input;
  if (input == 'A') {
    add();
  }
  else if (input == 'P') {
    print();
  }
  else if (input == 'D') {
    delete();
  }
  else {
    cout << "That's an invalid input. Please enter either A, P, or D" << endl;
  }
//Vector pointer which points to a vector of struct pointers
//Read in students
//Print them out
//Delete them
//Finishes with a Quit command
}
