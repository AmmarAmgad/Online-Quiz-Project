#include <iostream>
#include <fstream>
#include "quiz.h"
#define endl '\n'
using namespace std;
static int count = 0;

//Default Constructor.
Student::Student()
{
    cout << "Welcome To The Online Quiz!" <<endl;
    cout << "Please Enter Your Data:" <<endl;
}

//Methods Student.
void Student::setname(string n)
{
    name = n;
}

void Student::setid(long long i)
{
    id = i;
}

void Student2::setpassword(int pass)
{
    password = pass;
}

bool Student2::checkpass(int realpass)
{
    realpass = 1234;

    if(password != realpass){
        for(int i = 0; i<2; i++){
            cout << "Wrong Password, Please Try Again: ";
            cin >> password;

            if(password == realpass)
                break;
        }
    }
    if(password != realpass)
        return false;

    return true;
}

void Student3::setsection(int sec)
{
    section = sec;
}

void Student3::setdepartment(string dep)
{
    department = dep;
}

//Display Info Inside File.
void Student3::getinfo()
{
    ofstream Data;
    Data.open("Student_Grade.txt", ios::out | ios::app);
    if(Data.is_open())
    {
        Data << "-Student Name: " << name <<endl;
        Data << "-Student Id: " << id <<endl;
        Data << "-Student Section: " << section <<endl;
        Data << "-Student Department: " << department <<endl;
        Data << "Grade: (" << count << "/7)" <<endl;
        Data << "------------------------------------" <<endl;
        
        Data.close();
    }
    else
        cout << "Error";
}


//Methods parent Quizes.
void Quizes::Questions()
{
    cout << "==========================================" <<endl;
    cout << "*Please Choose The Correct Answer For The Following Questions*" <<endl <<endl;
}

void Quizes::getanswers()
{
    cout << "==========================================" <<endl;
}

//Methods Quiz1.
void Quiz1::Questions()
{
    Quizes::Questions();
    char correct[7] = {'a', 'c', 'c', 'b', 'b', 'a', 'b'};
    char answers[7];
    
    cout<< "1- What is the capital of Egypt?" <<endl;
	cout<< "a: Cairo      b: Alex      c: Tanta      d: Giza" <<endl;
    cin>>A1; answers[0] = A1;
    if(answers[0] == correct[0]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "2- What is the color of the sun?" <<endl;
	cout<< "a: yellow      b: orange      c: white      d: red" <<endl;
	cin>>A2; answers[1] = A2;
    if(answers[1] == correct[1]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "3- How many days are there in a week?" <<endl;
	cout<< "a: 5      b: 6      c: 7      d: 8" <<endl;
	cin>>A3; answers[2] = A3;
    if(answers[2] == correct[2]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "4- How many fingers are there in one hand?" <<endl;
	cout<< "a: 10      b: 5      c: 4      d: 16" <<endl;
	cin>>A4; answers[3] = A4;
    if(answers[3] == correct[3]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "5- How many parts are in The Holy Quran?" <<endl;
	cout<< "a: 45      b: 30      c: 25      d: 114" <<endl;
	cin>>A5; answers[4] = A5;
    if(answers[4] == correct[4]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;


    cout<< "6- An atom is the smallest particle?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A6; answers[5] = A6;
    if(answers[5] == correct[5]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "7- Colorblind people can see true colors?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A7; answers[6] = A7;
    if(answers[6] == correct[6]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;
}

void Quiz1::getanswers()
{
    Quizes::getanswers();
    cout << "Your Final Grade is (" << count << "/" << 7  << ")" <<endl;

    char correct[7] = {'a', 'c', 'c', 'b', 'b', 'a', 'b'};
    cout << "Q1- Your Answer: " << A1 << "\t Correct Answer: " << correct[0] <<endl;
    cout << "Q2- Your Answer: " << A2 << "\t Correct Answer: " << correct[1] <<endl;
    cout << "Q3- Your Answer: " << A3 << "\t Correct Answer: " << correct[2] <<endl;
    cout << "Q4- Your Answer: " << A4 << "\t Correct Answer: " << correct[3] <<endl;
    cout << "Q5- Your Answer: " << A5 << "\t Correct Answer: " << correct[4] <<endl;
    cout << "Q6- Your Answer: " << A6 << "\t Correct Answer: " << correct[5] <<endl;
    cout << "Q7- Your Answer: " << A7 << "\t Correct Answer: " << correct[6] <<endl;
}

//Methods Quiz2.
void Quiz2::Questions()
{
    Quizes::Questions();
    char correct[7] = {'d', 'c', 'a', 'c', 'b', 'a', 'b'};
    char answers[7];
    
    cout<< "1- What is the solution of this equation ( 2*4+8*1-4/2 )?" <<endl;
	cout<< "a: 11      b: 12      c: 13      d: 14" <<endl;
    cin>>A1; answers[0] = A1;
    if(answers[0] == correct[0]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "2- How many hours in 4 days?" <<endl;
	cout<< "a: 72      b: 48      c: 96      d: 120" <<endl;
	cin>>A2; answers[1] = A2;
    if(answers[1] == correct[1]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "3- What is the boiling point of water in Celsius?" <<endl;
	cout<< "a: 100°C      b: 0°C      c: 50°C      d: 150°C" <<endl;
	cin>>A3; answers[2] = A3;
    if(answers[2] == correct[2]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "4- What is the next number in the sequence: 1, 2, 3, 5, 8, ?" <<endl;
	cout<< "a: 11      b: 12      c: 13      d: 14" <<endl;
	cin>>A4; answers[3] = A4;
    if(answers[3] == correct[3]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "5- How many sides does a hexagon have?" <<endl;
	cout<< "a: 4      b: 6      c: 8      d: 10" <<endl;
	cin>>A5; answers[4] = A5;
    if(answers[4] == correct[4]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;


    cout<< "6- The human body has more than 200 bones?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A6; answers[5] = A6;
    if(answers[5] == correct[5]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "7- The speed of sound is faster than the speed of light?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A7; answers[6] = A7;
    if(answers[6] == correct[6]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;
}

void Quiz2::getanswers()
{
    Quizes::getanswers();
    cout << "Your Final Grade is (" << count << "/" << 7  << ")" <<endl;

    char correct[7] = {'d', 'c', 'a', 'c', 'b', 'a', 'b'};
    cout << "Q1- Your Answer: " << A1 << "\t Correct Answer: " << correct[0] <<endl;
    cout << "Q2- Your Answer: " << A2 << "\t Correct Answer: " << correct[1] <<endl;
    cout << "Q3- Your Answer: " << A3 << "\t Correct Answer: " << correct[2] <<endl;
    cout << "Q4- Your Answer: " << A4 << "\t Correct Answer: " << correct[3] <<endl;
    cout << "Q5- Your Answer: " << A5 << "\t Correct Answer: " << correct[4] <<endl;
    cout << "Q6- Your Answer: " << A6 << "\t Correct Answer: " << correct[5] <<endl;
    cout << "Q7- Your Answer: " << A7 << "\t Correct Answer: " << correct[6] <<endl;
}

//Methods Quiz3.
void Quiz3::Questions()
{
    Quizes::Questions();
    char correct[7] = {'d', 'b', 'c', 'b', 'a', 'a', 'b'};
    char answers[7];
    
    cout<< "1- How many teeth does an adult human have?" <<endl;
	cout<< "a: 29      b: 55      c: 64      d: 32" <<endl;
    cin>>A1; answers[0] = A1;
    if(answers[0] == correct[0]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "2- What is the capital of Japan?" <<endl;
	cout<< "a: Beijing      b: Tokyo      c: Seoul      d: Bangkok" <<endl;
	cin>>A2; answers[1] = A2;
    if(answers[1] == correct[1]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "3- Which planet is known as the 'Red Planet'?" <<endl;
	cout<< "a: Venus      b: Jupiter      c: Mars      d: Saturn" <<endl;
	cin>>A3; answers[2] = A3;
    if(answers[2] == correct[2]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "4- What is the chemical symbol for iron?" <<endl;
	cout<< "a: Ir      b: Fe      c: In      d: Au" <<endl;
	cin>>A4; answers[3] = A4;
    if(answers[3] == correct[3]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

	cout<< "5- Who developed the theory of relativity?" <<endl;
	cout<< "a: Albert Einstein      b: Isaac Newton      c: Galileo Galilei      d: Stephen Hawking" <<endl;
	cin>>A5; answers[4] = A5;
    if(answers[4] == correct[4]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;


    cout<< "6- The largest living frog is the Goliath frog of West Africa?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A6; answers[5] = A6;
    if(answers[5] == correct[5]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;

    cout << "----------------------------" <<endl;

    cout<< "7- An ant can lift 1,000 times its body weight?" <<endl;
    cout<< "a: True      b: False" <<endl;
    cin>>A7; answers[6] = A7;
    if(answers[6] == correct[6]){
        cout << "Correct Answer!" <<endl;
        count++;
    }
    else
        cout << "Incorrect Answer!" <<endl;
}

void Quiz3::getanswers()
{
    Quizes::getanswers();
    cout << "Your Final Grade is (" << count << "/" << 7  << ")" <<endl;

    char correct[7] = {'d', 'b', 'c', 'b', 'a', 'a', 'b'};
    cout << "Q1- Your Answer: " << A1 << "\t Correct Answer: " << correct[0] <<endl;
    cout << "Q2- Your Answer: " << A2 << "\t Correct Answer: " << correct[1] <<endl;
    cout << "Q3- Your Answer: " << A3 << "\t Correct Answer: " << correct[2] <<endl;
    cout << "Q4- Your Answer: " << A4 << "\t Correct Answer: " << correct[3] <<endl;
    cout << "Q5- Your Answer: " << A5 << "\t Correct Answer: " << correct[4] <<endl;
    cout << "Q6- Your Answer: " << A6 << "\t Correct Answer: " << correct[5] <<endl;
    cout << "Q7- Your Answer: " << A7 << "\t Correct Answer: " << correct[6] <<endl;
}
