#include <iostream>
#include <string>
using namespace std;

// Question 1

class Complex{
    public:
    int realVal;
    int imgVal;
    void show(){
        cout << "Number : " << realVal << " + " << imgVal <<"i\n";
    }

    void operator -(Complex &obj){
        int resReal = this->realVal - obj.realVal;
        int resImg = this->imgVal - obj.imgVal;
        Complex c3(resReal,resImg);
        c3.show();
    }

    Complex operator +(Complex &obj){
        int resReal = this->realVal + obj.realVal;
        int resImg = this->imgVal + obj.imgVal;
        Complex c4(resReal , resImg);
        return c4;
    }

};

// Question 2

class Bank{
    private : 
    int accountNo;
    int balance;
    public:
    void deposit(int val){
        balance = val;
        cout << val << " Deposited.\n";
    }
    void withdraw(int val){
        balance = balance - val;
        cout << val << " withdrawed.\n"; 
    }
    void getBalance(){
        cout << "Current Balance is : " << balance;
    }
};

// Question 3

class Person{
    public:
    string name;
    int age;
    

};

class Student : public Person{
    public:
    string studentID;
    void displayStudentInfo(string nameVal, int ageVal ,string id){
        name = nameVal;
        age = ageVal;
        studentID = id;

        cout << "Name of student is " << name << endl;
        cout << "Age of student is " << age << endl;
        cout << "ID of student is " << studentID << endl;

    }

};


int main(){
    Student s1;
    s1.displayStudentInfo("Nik",22,"2024en03069");
    return 0;
}