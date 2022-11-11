#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void TA::setYear(int Year){
    taYear = Year;
}
void TA::getYear(){
    cout<<"Year: "<<taYear<<endl;
}
void TA::setCGPA(float CGPA){
    cgpa = CGPA;
}
void TA::getCGPA(){
    cout<<"CGPA: "<<cgpa<<endl;
}
