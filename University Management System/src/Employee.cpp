#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void Employee::setID(int ID){
    id = ID;
}
void Employee::getID(){
    cout<<"Employee ID: "<<id<<endl;
}
void Employee::setJob(string Job){
    jobType = Job;
}
void Employee::getJob(){
    cout<<"Job Type: "<<jobType<<endl;
}
