#include <iostream>
using namespace std;
#include "Final_Term_Project.h"

void Person::setName(string Name){

    name = Name;

}
void Person::getName(){

    cout<< "Name: "<<name<< endl;

}
void Person::setCountry(string Country){

    country = Country;

}
void Person::getCountry(){

    cout<<"Country: "<<country<<endl;

}

