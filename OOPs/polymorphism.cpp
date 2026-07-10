#include<iostream>
#include <string>
using namespace std;

class Print{
    public:
    
    void show(int val){
        cout << val <<"\n";
    }

    void show(string val){
        cout << val <<"\n";  
    }
};

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r,int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout << real << " + " << img << "i\n";
    }

    void operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal,resImg);
        cout << "res = " ; 
        c3.showNum();
    }

    Complex operator -(Complex &obj){
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;
        Complex c4(resReal,resImg);
        return c4;
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();
    c1 + c2;

    Complex c4 = c1 - c2;
    c4.showNum();
    return 0;
}