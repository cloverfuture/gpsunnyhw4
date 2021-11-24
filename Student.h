#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
private:
    string fullName;
    string major;
    double GPA;
    string projectID;
    
public:
    
    // 1. Define an inline default constructor to initialize every attribute to their default value, MUST USE CONSTRUCTOR DELEGATION here:
    Student()
    {
        fullName = "";
        major = "";
        GPA = 0;
        projectID ="";
    
    }
    // 2. Define an overloaded inline constructor that receives 4 arguements here:
    Student(string fulln, string stumajors, double gpa, string prodid)
    {
        fullName = fulln;
        major = stumajors;
        GPA = gpa;
        projectID = prodid;

    }

    
    //set and get functions
    void setFullName(string);
    string getFullName() { return fullName; }
    void setMajor(string);
    string getMajor() { return major; }
    void setGPA(double);
    double getGPA() { return GPA; }
    void setProjectID(string);
    string getProjectID() { return projectID; }
    
    // Additional function
    void displayStudentInfo();
    
};
#endif
