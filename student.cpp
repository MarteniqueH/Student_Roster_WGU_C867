#include "student.h"
#include <iostream>
using namespace std;


Student::Student(string sID, string first, string last,
string email, int a, int daysInCourse1,int daysInCourse2, int daysInCourse3,
DegreeProgram degree)
{
this->studentID = sID;
this->firstName = first;
this->lastName = last;
this->emailAddress = email;
this->age = a;
this->degreeprogram = degree;
this->daysInCourse[0]=daysInCourse1;
this->daysInCourse[1]=daysInCourse2;
this->daysInCourse[2]=daysInCourse3;
}
string Student::getStudentID()const
{return studentID;}
string Student::getFirstName()const
{return firstName;}
string Student::getLastName()const
{return lastName;}
string Student::getEmailAddress()const
{return emailAddress;}
int Student::getAge()const
{return age;}
int* Student::getDaysInCourse()
{return daysInCourse;}
DegreeProgram Student::getDegreeProgram()const
{return degreeprogram;}




void Student::printstudentData() {
cout << studentID << "\tFirst Name: "<< firstName;
cout << "\tLast Name: "<< lastName;
cout<<"\tAge: "<< age;



cout << "\tDays in Course: {";
   for (int i = 0; i< 3; i++) {
       cout<< daysInCourse[i]<<",";
   }



cout<<"}\tDegree Program: ";
   if (degreeprogram == SECURITY){
       cout << "SECURITY"<<endl;
   } else if (degreeprogram == NETWORK){
       cout << "NETWORK" << endl;
   } else if (degreeprogram == SOFTWARE){
       cout << "SOFTWARE" << endl;
   } else {
       cout << "Unkown" << endl;
   }
   cout<<endl;
}

