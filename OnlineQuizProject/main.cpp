#include <iostream>
#include <string>
#include "quiz.h"
#define endl '\n'
using namespace std;
int main()
{
    //CLASS 1.
    string name;
    long long id;
    int password;
    int section;
    string department;

    Student3 s1;

    cout << "-Your Name: ";
    getline(cin, name);
    s1.setname(name);

    cout << "-Your Id: ";  
    cin >> id;
    s1.setid(id);

    cout << "-Quiz Password: ";
    cin >> password;
    s1.setpassword(password);

    if(!s1.checkpass(password)){
        cout << "Wrong, Try Again Later.";
        return 0;
    }

    cout << "-Your Section: ";
    cin >> section;
    s1.setsection(section);

    cout << "-Your Department: ";
    cin >> department;
    s1.setdepartment(department);


    //CLASS 2,3,4.
    Quiz1 Q1;
    Quiz2 Q2;
    Quiz3 Q3;

    cout <<endl;
    cout << "Choose Quiz Level:" <<endl;
    cout << "1- Easy    2- Mid    3- Hard" <<endl;

    int lvl;    
    cin >> lvl;

    if(lvl == 1){
        Q1.Questions();
        Q1.getanswers();
    }
    else if(lvl == 2){
        Q2.Questions();
        Q2.getanswers();
    }
    else if(lvl == 3){
        Q3.Questions();
        Q3.getanswers();
    }

    s1.getinfo();
    
    return 0;
}