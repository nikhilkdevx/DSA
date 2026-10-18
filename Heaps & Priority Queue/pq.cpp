// Topic --> Priority Queue ---> these are made with the help of Heaps.

#include<iostream>
#include<queue>
using namespace std;

// int main(){
//     priority_queue<int,vector<int>,greater<int>> pq;
//     pq.push(10);
//     pq.push(20);
//     pq.push(3);
//     pq.push(1);
//     pq.push(6);

//     while(!pq.empty()){
//         cout << "top : " << pq.top() << endl;
//         pq.pop();
//     }
//     return 0;
// }

class Student{
public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }
};

// Priority Queues for Pairs / Objects

int main(){
    priority_queue<Student> pq;
    pq.push(Student("Nik",90));
    pq.push(Student("Ridhi",30));
    pq.push(Student("Anjali",90));

}