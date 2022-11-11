#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void Officer::setBuilding(string Building){
    building = Building;
}
void Officer::getBuilding(){
    cout<<"Building Name: "<<building<<endl;
}
void Officer::setEmail(string Email){
    email = Email;
}
void Officer::getEmail(){
    cout<<"Email: "<<email<<endl;
}
