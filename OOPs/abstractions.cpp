#include<iostream>
#include <string>
using namespace std;

class Shape{
    public:
    virtual void draw() = 0; // Pure Virtual Fn
};

class Circle : public Shape{
    public :
    void draw(){
        cout << "circle draw\n";
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout << "Square draw\n";
    }
};


int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();


    return 0;
}