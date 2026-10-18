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

// class Student{
// public:
//     string name;
//     int marks;
//     Student(string name, int marks){
//         this->name = name;
//         this->marks = marks;
//     }

//     bool operator < (const Student &obj) const {
//         return this->marks < obj.marks;
//     }
// };

// Priority Queues for Pairs / Objects
struct comparePair{
    bool operator () (pair<string,int> &p1, pair<string,int> &p2){
        return p1.second < p2.second;
    }
};

int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair> pq;

    pq.push(make_pair("Nik",90));
    pq.push(make_pair("Ridhi",30));
    pq.push(make_pair("Anjali",80));

    while(!pq.empty()){
        cout <<" top =" << pq.top().second << endl;
        pq.pop();
    }

}