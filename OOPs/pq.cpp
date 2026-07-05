#include<iostream>
#include<string>
using namespace std;

class User{

private:
    int id;
    string password;

public:
        string Username;
    
        User(int id){
        this->id = id;
        cout << "id has been intialize "<<endl;
        }

        void setPassword(string password){
        this->password = password;
        }

        void getPassword(){
        cout << "Password is : "<< this->password << endl; 
        }
    

    

};

int main(){
     User user1(101);
     user1.Username = "Nikwillachievefreedom";
     user1.setPassword("Nik");
     user1.getPassword();
     cout << user1.Username << endl;
    
    
    return 0;
}
