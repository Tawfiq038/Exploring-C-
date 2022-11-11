#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person{
public:
    void setName(string Name);
    void getName();
    void setCountry(string Country);
    void getCountry();
private:
        string name;
        string country;
};
class Student : public Person{
public:
    void setId(int ID);
    void getId();
    void setSection(string Section);
    void getSection();
private:
    int studentId;
    string section;
};
class scholarshipStudent : public Student
{
public:
    void setYear(string Year);
    void getYear();
    void setId(int Id);
    void getId();
private:
    string year;
    int scholarId;
};
class Employee : public Person{
public:
    void setID(int ID);
    void getID();
    void setJob(string Job);
    void getJob();
private:
    int id;
    string jobType;
};
class TA : public Employee, public Student{
public:
    void setYear(int Year);
    void getYear();
    void setCGPA(float CGPA);
    void getCGPA();
private:
    int taYear;
    float cgpa;
};
class Faculty : public Employee{
public:
    void setDepartment(string Department);
    void getDepartment();
    void setRoom(int Room);
    void getRoom();
private:
    string department;
    int roomNo;
};
class Officer : public Employee{
public:
    void setBuilding(string Building);
    void getBuilding();
    void setEmail(string Email);
    void getEmail();
private:
    string building;
    string email;
};

#endif // PERSON_H
