#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include "student.h"
#include "degree.h"




using namespace std;


class Roster {
   private:
Student** classRosterArray;


   public:
   Roster();
   void parseStudentData(string studentData);
  void add(string studentID, string firstName, string lastName,
  string emailAddress, int age, int daysInCourse1,
  int daysToCourse2, int daysinCourse3, DegreeProgram degreeprogram);
    void printAll();
   void remove(string studentID);
   void printAverageDaysInCourse(string studentID);
   void printByDegreeProgram(DegreeProgram degreeprogram);
     void printInvalidEmail();
  Student** getClassRosterArray() const
{return classRosterArray;}
   ~Roster();
};
#endif
