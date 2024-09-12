#include <iostream>
#include <string>
#include "student.h"

//constructor definition]
Student::Student(const std::string &fName, const std::string &lName, int ID)
: firstName(fName)
, lastName(lName)
, studentID(ID)
{
}

//getters
std::string Student::getFirstName() const
{
    return firstName;
}

std::string Student::getLastName() const
{
    return lastName;
}

int Student::getStudentID() const
{
    return studentID;
}

int Student::getGrades() const
{
    return *grades;
}

int Student::getGradeCount() const
{
    int arrayLenth;
    arrayLenth = sizeof(grades) / sizeof(int);
    return arrayLenth;
}

//setters
void Student::setFirstName(const std::string &fName)
{
    firstName = fName;
}

void Student::setLastName(const std::string &lName)
{
    lastName = lName;
}

void Student::setStudentID(int ID)
{
    studentID = ID;
}

//adds new grade into the array
void Student::addGrade(int newGrade)
{
    if (getGradeCount() == 10) {
        std::cout << "Student has maximum number of grades.";
    }
    else{
        grades[getGradeCount() + 1] = newGrade;
    }
}

//caculatetes the average grade for the student
double Student::calculateGradeAverage() const
{
    double gradeAvg;
    double sum = 0;
    for (int i = 0; i <= getGradeCount(); i++){
        sum = sum + grades[i];
    }
    gradeAvg = sum / getGradeCount();
}