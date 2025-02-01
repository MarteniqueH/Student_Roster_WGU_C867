#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"


using namespace std;


class Student {
private:
string studentID;
string firstName;
string lastName;
string emailAddress;
int age;
int daysInCourse[3]; 
DegreeProgram degreeprogram;


public:
Student(string sID, string first, string last, string email,
int a, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree);
string getStudentID()const;
string getFirstName()const;
string getLastName()const;
string getEmailAddress()const;
int getAge()const;
int* getDaysInCourse(); 
int getAverageDaysInCourse()
{return (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3; }
DegreeProgram getDegreeProgram()const;


void setStudentID(string studentID);
void setFirstName(string firstName);
void setLastName(string lastName);
void setEmailAddress(string emailAddress);
void setAge( int age ) ;
void setdaysInCourse( int daysInCourse1, int daysInCourse2, int daysInCourse3  );
void setDegreeProgram (DegreeProgram degreeprogram);


void printstudentData();
~Student(){}
};
#endif
