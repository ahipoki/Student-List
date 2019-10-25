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

void addStudent(vector<Student*> *vecS) {//Method for adding students
  cout << "Add" << endl;
  vecS->push_back(new Student());
  cin.getline(vecS->at(vecS->size()-1)->firstName, 80);
  cin.getline(vecS->at(vecS->size()-1)->lastName, 80);
  cin.getline(vecS->at(vecS->size()-1)->id, 80);
  cin.getline(vecS->at(vecS->size()-1)->gpa, 80);
  //Create a new student
  Student* s = new Student;
  //Push into that student
  //Push that into the vector
  cout << "Enter a first name: " << endl;
  cin >> vecS->firstName;
  cout << "Enter a last name: " << endl;
  cin >> vecS->lastName;
  cout << "Enter a student ID: " << endl;
  cin >> vecS->id;
  cout << "Enter a GPA: " << endl;
  cin >> vecS->gpa;
  //cout << "First name: " << *s->firstName << " Last name: " << *s->lastName << " ID: " << s->id << " GPA: " << s->gpa << endl;
  //Add student to vector of students
}

void printStudent(vector<Student*> *vecS) {//Method for printing out students
  for (vector<Student*>::iterator i = vecS->begin(); i != vecS->end(); i++) {
    cout << (*i)->firstName << " " << (*i)->lastName << " " << (*i)->id << " " << (*i)->gpa << " " << endl;
  }
}

void removeStudent(vector<Student*> *vecS) {//Method for deleting students
  int IdInput = 0;
  cout << "Enter the ID of the student you want to remove" << endl;
  cin >> IdInput;
  for (vector<Student*>::iterator i = vecS->begin(); i != vecS->end(); i++) {
    if (IdInput == (*i)->id) {
      delete *i;
      vecS->erase(i);
      return;
    }
  }
}

int main()
{
  char action = 0;
  vector<Student*> *vecS;

  Student* sP = new Student;
  
  while (true) {
    char input[80];
    cout << "Do you want to add a student, print out the students, delete a student, or quit? (ADD/PRINT/DELETE/QUIT)" << endl;
    cin.getline(input, sizeof(input));
    if (strcmp(input, "ADD") == 0) {
      addStudent(vecS);
    }
    else if (strcmp(input, "PRINT") == 0) {
      printStudent(vecS);
    }
    else if (strcmp(input, "DELETE") == 0) {
      removeStudent(vecS);
    }
    else if (strcmp(input, "QUIT") == 0) {
      return false;
    }
    else {
      cout << "That is an invalid option" << endl;
    }
  }
}
