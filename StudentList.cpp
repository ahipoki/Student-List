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

void addStudent(vector<Student> &vecS) {//Method for adding students
  cout << "Add" << endl;
  //Create a new entry for a student
  //struct Student firstAdd = { 0 };
  //char firstAdd[10];
  //char lastAdd[10];
  //int id = 0;
  //float gpa = 0.0;
  //Student add;
  //vector<Student> sub;
  //std::vector<Student*> vecA;
  //Student* sA = new Student;
  //After you type add
  //vecA.push_back(Student());
  //vecS.push_back(Student());
  cout << "Enter a first name: " << endl;
  cin >> vecS.firstName;
  //Student[0].firstName = "John";
  //firstAdd = &nameAdd;
  cout << "Enter a last name: " << endl;
  //cin >> lastAdd;
  //vecS.push_back(Student());
  //vecS[1].lastName = "Smith";
  //sA->lastName;
  cout << "Enter a student ID: " << endl;
  //cin >> id;
  //sA->id = add.id;
  cout << "Enter a GPA: " << endl;
  //cin >> gpa;
  //sA->gpa = add.gpa;
  //vecA.push_back(sA);
  cout << "First name: " << firstAdd << " Last name: " << lastAdd << " ID: " << id << " GPA: " << gpa << endl;
  //Add student to vector of students
}

void printStudent(vector<Student> &vecS) {//Method for printing out students
  cout << "Print" << endl;
  //vector<Student*> vecP;
  //std::vector<Student*>::iterator it = vecP.begin();
  //for (vector<Student*>::iterator it = vecS.begin(); it != vecS.end(); it++) {
  //cout << *it << ' ';
  //}
  //cout << "Test" << endl;
  //cout << "Students: ";
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

void removeStudent(vector<Student> &vecS) {//Method for deleting students
  cout << "Delete" << endl;
  //std::vector<Student> del;
  //del.push_back('John');
  //del.push_back('Smith');
  //del.push_back(2);
  //int id = 0;
  //cout << "Enter the student ID you wish to delete" << endl;
  //cin >> id;
  //vecS.begin() + (id - 1);
  //vecS.erase(vecS.begin() + id);
  //cout << "ID: " << id << endl;
  //Remove that struct from the vector
  //Delete the data
}

int main()
{
  bool stillUsing = true;
  char action = 0;
  std::vector<Student> vecS;
  std::vector<Student*> vecP;

  Student* sP = new Student;
  struct Student s1 = { 1,2};

  sP = &s1;
  while (stillUsing == true) {
    char input[80];
    cout << "Do you want to add a student, print out the students, delete a student, or quit? (ADD/PRINT/DELETE/QUIT)" << endl;
    cin.getline(input, sizeof(input));
    if (strcmp(input, "ADD") == 0) {
      addStudent(vecS);
      //vecS.push_back(s1);
      //cout << sP->firstName << " " << sP->lastName;
    }
    else if (strcmp(input, "PRINT") == 0) {
      printStudent(vecS);
      //vecS.push_back(s1);
      //cout << sP->firstName << " " << sP->lastName;
    }
    else if (strcmp(input, "DELETE") == 0) {
      removeStudent(vecS);
      //vecS.push_back(s1);
      //cout << sP->firstName << " " << sP->lastName;
    }
    else if (strcmp(input, "QUIT") == 0) {
      stillUsing = false;
      //vecS.push_back(s1);
      //cout << sP->firstName << " " << sP->lastName;
    }
    else {
      cout << "That is an invalid option" << endl;
      //vecS.push_back(s1);
    }
  }
}
