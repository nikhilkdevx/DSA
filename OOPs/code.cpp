#include<iostream>
#include <string>
using namespace std;

class Student{
    // properties
    string name;
    float  cgpa;
public:
    
    // Methods
    void getPercentage(){
        cout << ( cgpa * 10) << endl;

    }

    // setters
    void setName(string nameval){
        name = nameval;
    }

    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }

    // Getters
    string getName(){
       return name;
    }

    float getcgpa(){
        return cgpa;
    }

};

int main(){
    Student s1;
    // s1.name = "Nik";
    // s1.cgpa = 9.0;

    s1.setcgpa(9.0);
    s1.setName("Nik");
    
    cout << s1.getName() << endl;
    cout << s1.getcgpa() << endl;

    // cout << s1.name << endl;
    // cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}