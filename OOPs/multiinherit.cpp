#include<iostream>
#include <string>
using namespace std;

// class Animal{
//     public:
//     void breathe(){
//         cout << "Can Breathe..\n";
//     }

//     void eats(){
//         cout << "Can Eats..\n";
//     }
// };

// class Mammals : public Animal{
//     public:
//     void bloodType(){
//         cout << "Are Warm blooded\n";
//     }
// };

// class Dog: public Mammals{
//     public:
//     void tailWigs(){
//         cout << "Can Wig his tails\n";
//     }
// };

class Teacher{
    public:
    int salary;
    string subject;
};

class Student{
    public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student{
    public:
    string name;

};

int main(){
    TA t1;
    t1.name = "Nik";
    t1.cgpa = 9.4;
    t1.rollno = 12345;
    t1.salary = 100000;
    t1.subject = "Maths";

    cout << t1.name << endl;
    cout << t1.cgpa << endl;
    cout << t1.rollno << endl;
    cout << t1.salary << endl;
    cout << t1.subject << endl;

    
    return 0;
}