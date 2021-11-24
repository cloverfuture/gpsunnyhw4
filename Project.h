#ifndef PROJECT_H
#define PROJECT_H
#include "Student.h"
#include <string>
#include <vector>

class Project
{
private:
    string Project_ID;
    string Project_Manager;
    vector <Student> students;  // An example of aggregation
    
public:
    // The constructor
    Project(string, string, vector<Student>);

    
    // set and get functions
    void setProject_ID (string);
    string getProject_ID();
    void setProject_Manager(string);
    string getProject_Manager();
    void setStudents(vector<Student>);
    vector<Student> getStudents();
    
    //display function
    void displayProjectInfo();
    
};
#endif
