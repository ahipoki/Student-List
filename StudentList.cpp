#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

/*
 *Author: Finn McKinley
 *10/30/19
 *A list of students to track their name, ID, and gpa
 *You can add or remove students or print out all students in the vector
 */

struct Student {//Struct of students
  char firstName[10];
  //First name
  char lastName[10];
  //Last name
  int id;
  //ID
  float gpa;
  //GPA
};

void addStudent(vector<Student*>*vecS) {//Method for adding students
  vecS->push_back(new Student());
  //Push back a new student
  bool loopBreak = true;
  //A bool for a while loop
  bool newId = false;
  //If an ID is new or not
  int idInput;
  //User's input for ID
  cout << "Enter a first name: " << endl;
  //Prompt for a first name
  cin.getline(vecS->at(vecS->size()-1)->firstName, 10);
  //Get the input and add it to the vector
  cout << "Enter a last name: " << endl;
  //Prompt for a last name
  cin.getline(vecS->at(vecS->size()-1)->lastName, 10);
  //Get the input and add it to the vector
  do {//Do while loop around ID for letters
    while(loopBreak) {//Nested while loop
      cout << "Enter a student ID: " << endl;
      //Prompt for an ID
      cin>>idInput;
      //Take in user's input
      for (vector<Student*>::iterator i = vecS->begin(); i != vecS->end(); i++){//Iterator to go through the vector of students
	if (idInput == (*i)->id){//If the ID entered is already in the vector
	  while (newId == false) {//While it's not a new ID
	    cout<<"You cannot have two students with the same ID"<<endl;
	    //Tell the user they can't have two students with the same ID
	    cin.clear();
	    cout<<"Enter a student ID: "<<endl;
	    //Ask for an ID
	    cin>>idInput;
	    //Take in the user's input
	    if (idInput != (*i)->id){//If it is a new ID
	      newId = true;
	      //Break out of the loop
	    }
	  }
	}
	else{//If it is a new ID
	  vecS->at(vecS->size()-1)->id = idInput;
	  //Add that to the student's ID
	  newId = true;
	  loopBreak = false;
	  //Break out of loops
	}
      }
      cin.clear();
      cin.ignore(1000, '\n');
    }
  }while(cin.fail());
  //Get the input and add it to the vector
  do {
    cout << "Enter a GPA: " << endl;
    //Prompt for a GPA
    cin >> vecS->at(vecS->size()-1)->gpa;
    cin.clear();
    //cin.ignore(1000, '\n');
  }while(cin.fail());
  //Get the input and add it to the vector
}

void printStudent(vector<Student*> *vecS) {//Method for printing out students
  for (vector<Student*>::iterator i = vecS->begin(); i != vecS->end(); i++) {//For the vector of students, use an iterator to go from the beginning to the end
    cout << (*i)->firstName << " " << (*i)->lastName << ", " << (*i)->id << ", " <<((float)(int)(((*i)->gpa)*100))/100 << endl;
    //Print out the first and last names, id, and gpa
  }
}

void deleteStudent(vector<Student*> *vecS) {//Method for deleting students
  int IdInput = 0;
  cout << "Enter the ID of the student you want to remove" << endl;
  //Prompt for the ID of the student to delete
  cin >> IdInput;
  //Take in that input
  for (vector<Student*>::iterator i = vecS->begin(); i != vecS->end(); i++) {//For the vector of students, use an iterator and go through it
    if (IdInput == (*i)->id) {//If the input is in the vector
      delete *i;
      //Delete the student
      vecS->erase(i);
      //Erase the data
      return;
      //Return
    }
    else if (IdInput != (*i)->id) {//If the input is not in the vector
      cout << "That ID is not in the list of students" << endl;
      //Tell the user the input is not in the vector
    }
  }
}

int main()
{
  vector<Student*> *vecS = new vector<Student*>;
  //A vector of students

  while (true) {//While the quit function hasn't been used
    char input[80];
    cout << "Do you want to add a student, print out the students, delete a student, or quit? (ADD/PRINT/DELETE/QUIT)" << endl;
    //Ask if they want to add, print, delete or quit
    cin.getline(input, sizeof(input));
    //Get their input
    if (strcmp(input, "ADD") == 0) {//If they say ADD
      addStudent(vecS);
      //Call the add method
      cin.ignore(1000, '\n');
      //Prevent printing multiple lines
    }
    else if (strcmp(input, "PRINT") == 0) {//Else if they say PRINT
      printStudent(vecS);
      //Call the print method
    }
    else if (strcmp(input, "DELETE") == 0) {//Else if they say DELETE
      deleteStudent(vecS);
      //Call the delete method
      cin.ignore(1000, '\n');
      //Prevent printing multiple lines
    }
    else if (strcmp(input, "QUIT") == 0) {//Else if they say QUIT
      return false;
      //End the program
    }
    else {//Else if they say anything else
      cout << "That is an invalid option." << endl;
      //Tell them that's an invalid option
    }
  }
}
