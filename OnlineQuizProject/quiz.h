#include <iostream>
#include <string>
using namespace std;
//Student.
class Student
{
protected:
    string name;
    long long id;
public:
    Student();  //Default Constructor
    void setname(string n);
    void setid(long long i);
};

class Student2 : public Student
{
private:
    int password;
public:
    void setpassword(int pass);
    bool checkpass(int realpass);
};

class Student3 : public Student2
{
private:
    int section;
    string department;
public:
    void setsection(int sec);
    void setdepartment(string dep);
    void getinfo();
};

//Parent Quizes.
class Quizes
{
protected:
    char A1, A2, A3, A4, A5, A6, A7;
public:
    void Questions();
    void getanswers();
};

//Quiz1.
class Quiz1 : public Quizes
{
public:
    void Questions();
    void getanswers();
};

//Quiz2.
class Quiz2 : public Quizes
{
public:
    void Questions();
    void getanswers();
};

//Quiz3.
class Quiz3 : public Quizes
{
public:
    void Questions();
    void getanswers();
};