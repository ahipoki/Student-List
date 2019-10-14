#include <iostream>
#include <cstring>

using namespace std;

struct Student {
  char firstName[10];
  char lastName[10];
  int id;
  float gpa;
};

void add() {//Method for adding students
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

void print() {//Method for printing out students
  //Print out all students currently stored
  //Ex:
  //Jason Galbraith, 487329, 5.00
  //John Elstad, 903826, 3.25
  //Kevin Jin, 468921, 0.12
  //GPA shown to 2 decimal places
}

void remove() {//Method for deleting students
  cout << "Enter the student ID you wish to delete" << endl;
  //Remove that struct from the vector
  //Delete the data
}

int main()
{
  char input = 0;
  //cout << "Do you want to add, print, or delete a student? (Add/Print/Delete)" << endl;
  //cin >> input;
  //if (input. == "Add") {
  //add();
  //}
  Student test;
  cout << "Enter a name" << endl;
  cin >> test.firstName;
  cout << "Enter a last name" << endl;
  cin >> test.lastName;
  cout << "Enter a student ID" << endl;
  cin >> test.id;
  cout << "Enter a GPA" << endl;
  cin >> test.gpa;
  cout << "First name: " << test.firstName << endl;
  cout << "Last name: " << test.lastName << endl;
  cout << "ID: " << test.id << endl;
  cout << "GPA: " << test.gpa << endl;
    //else if (input == "Print") {
    //print();
    //}
    //else if (input == "Delete") {
    //remove();
    //}
    //else {
    //cout << "That's an invalid input. Please enter either A, P, or D" << endl;
    //}
//Vector pointer which points to a vector of struct pointers
//Read in students
//Print them out
//Delete them
//Finishes with a Quit command
}
