#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void Faculty::setDepartment(string Department){
    department = Department;
}
void Faculty::getDepartment(){
    cout<<"Department: "<<department<<endl;
}
void Faculty::setRoom(int Room){
    roomNo = Room;
}
void Faculty::getRoom(){
    cout<<"Room Num: "<<roomNo<<endl;
}

