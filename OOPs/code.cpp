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

class Car{
    public:
    string name;
    string color;
    int *mileage;
    
    // Constructor
    Car(string nameval, string colorval){
        cout << "you are going to input the value " << endl;
        this->name = nameval;
        this->color = colorval; 
        mileage = new int;
        *mileage = 12;
    }

    // Deep Copy
    Car(Car &original){
        cout << "Copying from original to new \n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;

    }

    // Destructor
    ~Car(){
        cout << "Deleting Object... \n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }
  
};

int main(){
    // Student s1;
    // s1.name = "Nik";
    // s1.cgpa = 9.0;

    // s1.setcgpa(9.0);
    // s1.setName("Nik");
    
    // cout << s1.getName() << endl;
    // cout << s1.getcgpa() << endl;

    // // cout << s1.name << endl;
    // // cout << s1.cgpa << endl;
    // s1.getPercentage();

    Car c1("Lambo" , "Black");
    
    Car c2(c1);
    *c2.mileage = 15;
    cout << *c1.mileage << endl;
    

    return 0;
} 