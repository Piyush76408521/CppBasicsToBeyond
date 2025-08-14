// Write a C++ Program to display data of a student.Data is passed to a function via Arguments.

// Approach-1.
#include <bits/stdc++.h>   
using namespace std;
struct Student{    // Structure and name of structure is Student. 
int Roll_no;       // Declaring of Roll_no. 
string Name;       // Declaring of Name.
int Admission_no;   // Declaring of Admission_no.
int Age;           // Declaring of Age.
};
void print(Student &s) {     // Function to print the Student data. Passing by references avoids copying.
  cout << s.Roll_no << " ";  // Print the Roll_no.
  cout << s.Name << " ";     // Print the Name.
  cout << s.Admission_no << " ";  // Print the Admission_no.
  cout << s.Age << endl;   // Print the Age.
}
int main() {    // Intialising a student struct values.
  Student s{31,"Piyush",2500403,20};  // Intialising the value of roll_no,Name,Admisssion_no,Age.
  print(s);    // Print the output in a series as we Declare.
  return 0;  // End of the Program.
}


// Approach-2.(soon)
