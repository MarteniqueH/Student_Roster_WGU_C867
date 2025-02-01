#include"roster.h"
#include "student.h"
#include<iostream>
#include <sstream>
#include <string>

Roster::Roster()
{classRosterArray = new Student* [5];
for (int i=0; i<5; ++i)
{classRosterArray[i] = nullptr;}}


void Roster::parseStudentData(string studentData)
{string studentID,  firstName, lastName, emailAddress;
int age, daysInCourse1, daysInCourse2, daysInCourse3; DegreeProgram degreeprogram;


size_t pos =0;


pos =studentData.find(',');
studentID =studentData.substr(0, pos);
studentData.erase(0, pos +1);


pos =studentData.find(",");
firstName =studentData.substr(0, pos);
studentData.erase(0, pos + 1 );


pos =studentData.find(',');
lastName =studentData.substr(0, pos);
studentData.erase(0, pos+1);


pos =studentData.find(',');
emailAddress =studentData.substr(0, pos);
studentData.erase(0, pos+1);


pos =studentData.find(',');
age =stoi(studentData.substr(0,pos));
studentData.erase(0, pos +1);


pos =studentData.find(',');
daysInCourse1 =stoi (studentData.substr(0, pos));
studentData.erase(0, pos +1);


pos =studentData.find(',');
daysInCourse2 =stoi (studentData.substr(0, pos));
studentData.erase(0, pos +1);


pos =studentData.find(',');
daysInCourse3 =stoi (studentData.substr(0, pos));
studentData.erase(0, pos +1);

string degreeString = studentData;


if (degreeString == "SECURITY"){
       degreeprogram = SECURITY;
   } else if (degreeString == "NETWORK"){
       degreeprogram = NETWORK;
   } else if (degreeString == "SOFTWARE"){
       degreeprogram = SOFTWARE;
   } else {
     degreeprogram =SOFTWARE;
   }




add(studentID, firstName, lastName, emailAddress, age, daysInCourse1,
daysInCourse2, daysInCourse3,degreeprogram);
}


void Roster::add(string studentID, string firstName,string lastName, string emailAddress,
int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
DegreeProgram degreeprogram)
{
for( int i=0; i<5; ++i)
   {if(classRosterArray[i]== nullptr)
{classRosterArray[i] = new Student (studentID,firstName,lastName,
emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3,
degreeprogram); break;
}
}
}


void Roster::printAll()
{for (int i=0; i<5; i++)
{if(classRosterArray[i]!= nullptr)
{classRosterArray[i]->printstudentData();
}}}
                                                                                                                                                                                                                                                                                                                                                                                                                         


void Roster::remove(string studentID)
{bool found=false;
for(int i=0;i<5; ++i)
{if(classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID()== studentID)
{delete classRosterArray[i];classRosterArray[i]=nullptr;
   found = true;
cout<< studentID << " has been removed from the roster. "<<endl; }
}
if (!found)
{ cout << studentID << "not found. "<<endl; }
}




void Roster::printAverageDaysInCourse(string studentID )
{for (int i=0; i<5; ++i)
{if(classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID()== studentID)
{int avgDays = classRosterArray[i]->getAverageDaysInCourse();


cout<< studentID <<": " << avgDays <<endl; 
}}}

void Roster::printByDegreeProgram(DegreeProgram degreeprogram)
{for (int i=0; i<5; i++)
{if (classRosterArray[i]!= nullptr && classRosterArray[i]->getDegreeProgram ()
== degreeprogram)
{classRosterArray[i]->printstudentData();
}
}
}


void Roster::printInvalidEmail() 
{for (int i = 0; i < 5; ++i) 
{if (classRosterArray[i] != nullptr) 
{string email = classRosterArray[i]->getEmailAddress();
            
email = email.substr(email.find_first_not_of(' '),
email.find_last_not_of(' ') -
email.find_first_not_of(' ') + 1);
if (email.find(' ') != string::npos || 
    email.find('@') == string::npos || 
    email.find('@') == 0 || 
    email.find('@') == email.length() - 1 || 
    email.find('.', email.find('@')) == string::npos || 
    email.find('.', email.find('@')) < email.find('@') + 2) 
    {cout << email << endl;
}}}}


Roster::~Roster()
{for(int i=0; i<5; i++)
if (classRosterArray[i]!=nullptr)
{delete classRosterArray[i];}
delete[] classRosterArray;
}
