#include "Project.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

Project::Project (string ID, string name, vector<Student> V)
{
    Project_ID = ID;
    Project_Manager = name;
    students = V;
}

void Project::setProject_ID (string ID)
{
    Project_ID = ID;
}

string Project::getProject_ID()
{
    return Project_ID;
}
void Project::setProject_Manager(string name)
{
    Project_Manager = name;
}
string Project::getProject_Manager()
{
    return Project_Manager;
}
void Project::setStudents(vector<Student> v)
{
    students = v;
}
vector<Student> Project::getStudents()
{
    return students;
}
void Project::displayProjectInfo()
{
    cout << "Project ID: " << Project_ID << endl;
    cout << "Project Manager: " << Project_Manager << endl;
    cout << "Project Team Member(s): " << endl;
    for ( int i = 0; i < students.size(); i++ )
        cout << "[" << students[i].getFullName()<< "] " << endl;
    cout<< endl;
}
