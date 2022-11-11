#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void scholarshipStudent::setId(int Id){
    scholarId = Id;
}
void scholarshipStudent::getId(){
    cout<<"Scholarship Id: "<<scholarId<<endl;
}
void scholarshipStudent::setYear(string Year){
    year = Year;
}
void scholarshipStudent::getYear(){
    cout<<"Scholarship Year: "<<year<< endl;
}

