#include "Student.h"
#include "Project.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void updateStudentProject( vector <Student> & , string, string);

int main ()
{

    ifstream inFile;
    inFile.open("studentApplicants.txt");

    string names;
    string majors;
    double gpa;

   
    cout << "+++++++++++++++++++++ Task 1 ++++++++++++++++++++" << endl;

    ///  right now we are populating it
    /// we are taking information from the vec with the textfile.
    vector<Student> StudentVec;
    while (!inFile.eof())
    {
        getline(inFile, names);
        inFile >> majors >> gpa;
        inFile.ignore();
        // we are have the class in studnet h now we ( we are going from student to class then to studenth.
        // you need a string , string, double then another string for the construct, if you do not have this it will reseult in a error.
         // " " is an empty string which is an unassigned proID.
        Student objstudent(names, majors, gpa, " ");
        StudentVec.push_back(objstudent);

        
    }
    cout << "The list of students" << endl;

    for (Student obj : StudentVec)
        obj.displayStudentInfo();

    cout << "+++++++++++++++++++++ Task 2 ++++++++++++++++++++" << endl;
   
    vector<Student> Sproject;
    for (int i = 0; i < StudentVec.size(); i++)
    {
        if (StudentVec[i].getMajor() == "MATH" || StudentVec[i].getMajor() == "COSC")
        {
            StudentVec[i].setProjectID("111");
            Sproject.push_back(StudentVec[i]);
        }
    }
    Project mathProject("111", "Dr.X", Sproject);
    for (Student obj : StudentVec)
        obj.displayStudentInfo();

    ///  Basically what we do here was sorting out whichstudents had a major of COSC and MATH, 
    //and if they had we cahgned their project ID. We also made a project for dr. x and 
    ///you know if its his project if it displays 111 and the sutdents that have met the requirments.

    
    
    cout << "+++++++++++++++++++++ Task 3 ++++++++++++++++++++" << endl;
    Student SaraStud("Sara Pane", "COSC", 3.5, " ");
    SaraStud.setProjectID("111");
    StudentVec.push_back(SaraStud);
    Sproject.push_back(SaraStud);
    mathProject.setStudents(Sproject);
    mathProject.displayProjectInfo();



    cout << "+++++++++++++++++++++ Task 4 ++++++++++++++++++++" << endl;

    for (int i = 0; i < Sproject.size(); i++)
    {
        names = Sproject[i].getFullName();
        if (Sproject[i].getGPA() < 3.5)
        {

            updateStudentProject(StudentVec,names,"");

            Sproject.erase(Sproject.begin() + i);
            i--;

        }
        

    }
    mathProject.setStudents(Sproject);
    mathProject.displayProjectInfo();
   
    
    for (int i = 0; i < StudentVec.size(); i++)
    {
        StudentVec[i].displayStudentInfo();
    }



    cout << "+++++++++++++++++++++ Task 5 ++++++++++++++++++++" << endl;
    
    Project DrY =  mathProject;
    DrY.setProject_Manager("Dr.Y");
    mathProject.displayProjectInfo();
    DrY.displayProjectInfo();
    return 0;
}

void updateStudentProject(vector <Student>& upstud, string names,string  prodids)
{
    for (int i = 0; i < upstud.size(); i++)
    {
        if (upstud[i].getFullName() == names)
        {
            upstud[i].setProjectID(prodids);
            break;
        }
    }

}

// Define updateStudentProject function here to be used for Task 4:


