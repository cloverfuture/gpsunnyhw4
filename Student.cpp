#include "Student.h"
#include <iostream>
using namespace std;



void Student::setFullName (string name )
{
    fullName = name;
}

void Student::setMajor (string maj)
{
    major = maj;
}

void Student::setGPA (double gpa )
{
    GPA = gpa;
}

void Student::setProjectID ( string project )
{
    projectID = project;
}

void Student::displayStudentInfo()
{
    cout << "Name: " << fullName << endl;
    cout << "Major: " << major << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Project ID: " << (projectID == "" ? "Not Assigned" : projectID ) << endl;
}
