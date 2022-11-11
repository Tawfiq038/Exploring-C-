#include <iostream>
#include "Final_Term_Project.h"

int main()
{
    Person p1;
    p1.setName("Tawfiq");
    p1.setCountry("Bangladeshi");
    p1.getName();
    p1.getCountry();

    Student s1;
    s1.setName("Tawfiq");
    s1.setId(21458783);
    s1.setSection("B8");
    s1.getName();
    s1.getId();
    s1.getSection();

    scholarshipStudent sc1;
    sc1.setName("Papon");
    sc1.setId(6437273);
    sc1.setYear("Third Year");
    sc1.getName();
    sc1.getYear();
    sc1.getId();
    Employee e1;
    e1.setName("Shishir");
    e1.setID(4568637356);
    e1.setJob("Full-Time");
    e1.getName();
    e1.getID();
    e1.getJob();

    Officer o1;
    o1.setName("Shamim");
    o1.setEmail("shamim.robin@gmail.com");
    o1.setBuilding("Annex");
    o1.getName();
    o1.getEmail();
    o1.getBuilding();

    Faculty f1;
    f1.setName("Ismail");
    f1.setDepartment("CSE Department");
    f1.setRoom(5635);
    f1.getName();
    f1.getDepartment();
    f1.getRoom();

    TA t1;
    t1.setId(628383);
    t1.setYear(2022);
    t1.setCGPA(3.75);
    t1.getId();
    t1.getYear();
    t1.getCGPA();
}
