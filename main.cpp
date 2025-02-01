#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;


int main() {
    
cout<< "Scripting and Programming" <<endl;
cout<< "Programming Language: C++"<<endl;
cout<< "Student ID: 011509876"<<endl;
cout<< "Name: Martenique Harmon"<<endl;

Roster classRoster;
  const string studentData[]=
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",       
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Martenique,Harmon,MhaXXXX0@wgu.edu,20,15,25,35,SOFTWARE"};



for (int i = 0; i <5; ++i) {
classRoster.parseStudentData(studentData[i]);}



cout << "Class Roster: "<<endl;
classRoster.printAll();


cout<<"Provided Emails Invalid: "<<endl;
classRoster.printInvalidEmail();

cout<<endl;
cout<< "Average Days In Course: "<<endl;
for (int i=0; i<5; ++i)
{if (classRoster.getClassRosterArray()[i] != nullptr)
{classRoster.printAverageDaysInCourse(classRoster
.getClassRosterArray()[i]->getStudentID());}}

cout<<endl;
cout << "SOFTWARE Degree Students Listed:   "<<endl;
classRoster.printByDegreeProgram(SOFTWARE);


cout << "Removing A3" <<endl;
classRoster.remove("A3");

cout<<endl;
classRoster.printAll();
 
cout << "Remove A3: Second Attempt" <<endl;
classRoster.remove("A3");


return 0;}
