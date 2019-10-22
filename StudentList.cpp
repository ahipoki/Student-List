#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

struct Student {
  char firstName[10];
  char lastName[10];
  int id;
  float gpa;
};

void addStudent() {//Method for adding students
  //Create a new entry for a student
  struct Student firstAdd = { 0 };
  char nameAdd = 0;
  char lastAdd = 0;
  int id = 0;
  float gpa = 0.0;
  //Student add;
  std::vector<Student*> vecA;
  Student* sA = new Student;
  //After you type add
  cout << "Enter a first name: " << endl;
  //cin >> firstAdd;
  //firstAdd = &nameAdd;
  cout << "Enter a last name: " << endl;
  //cin >> arr[0].lastName;
  //sA->lastName;
  cout << "Enter a student ID: " << endl;
  //cin >> arr[0].id;
  //sA->id = add.id;
  cout << "Enter a GPA: " << endl;
  //cin >> arr[0].gpa;
  //sA->gpa = add.gpa;
  //vecA.push_back(sA);
  //cout << "First name: " << nameAdd << " Last name: " << lastAdd << " ID: " << id << " GPA: " << gpa << endl;
  //Add student to vector of students
}

void printStudent() {//Method for printing out students
  vector<Student*> vecP;
  std::vector<Student*>::iterator it = vecP.begin();
  cout << "Students: ";
  //for (ptr = vecP.begin(); ptr < vecP.end(); ptr++) {
    //cout << *ptr << " ";
  //}

  //Print out all students currently stored
  //Ex:
  //Jason Galbraith, 487329, 5.00
  //John Elstad, 903826, 3.25
  //Kevin Jin, 468921, 0.12
  //GPA shown to 2 decimal places
}

void removeStudent() {//Method for deleting students
  std::vector<Student> del;
  //del.push_back('John');
  //del.push_back('Smith');
  //del.push_back(2);
  int id = 0;
  cout << "Enter the student ID you wish to delete" << endl;
  cin >> id;
  del.begin() + (id - 1);
  del.erase(del.begin() + id);
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
    cout << "Do you want to add a student, print out the students, delete a student, or quit? (A/P/D/Q)" << endl;
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
