#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void Student::setId(int ID){
    studentId = ID;
}
void Student::getId(){
    cout<<"Student ID: "<<studentId<<endl;
}

void Student::setSection(string Section){
    section = Section;
}
void Student::getSection(){
    cout<<"Section: "<<section<<endl;
}
