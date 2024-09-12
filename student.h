#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{

    private:
        std::string firstName;
        std::string lastName;
        int         studentID;
        int         grades[10];

    public:
        //constructors
        Student(const std::string &fName, const std::string &lName, int ID);

        //getters
        std::string getFirstName() const;
        std::string getLastName() const;
        int getStudentID() const;
        int getGrades() const;

        //setters
        void setFirstName(const std::string &fName);
        void setLastName(const std::string &lName);
        void setStudentID(int ID);

        //returns the number of grades
        int getGradeCount() const;

        //adds a new grade
        void addGrade(int grade);

        //calculates the grade average
        double calculateGradeAverage() const;


};

#endif