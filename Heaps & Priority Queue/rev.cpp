#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<cmath>
using namespace std;

// Priority Queues 
// int main(){
//     priority_queue<int,vector<int>,greater<int>> p;
//     p.push(2);
//     p.push(9);
//     p.push(0);


//     while(!p.empty()){
//         cout << p.top() << " ";
//         p.pop();
//     }
// }

//Priority Queues On Class
// class Student{
//     public:
//     int marks;
//     string Name;

//     Student(string name,int marks) {
//         this->marks = marks;
//         this->Name = name;
//     }

//     bool operator < (const Student &obj) const {
//         return this->marks > obj.marks;
//     }
// };


// Prirority Queues For Pairs

// struct comparePair{
//     bool operator() (pair<string,int> &p1, pair<string,int> &p2){
//         return p1.second > p2.second;
//     }
// };

// int main(){
//     priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair> p;
//     p.push(make_pair("Nik",85));
//     p.push(make_pair("Madhu",95));
//     p.push(make_pair("Nandani",100));
//     p.push(make_pair("Gudiya",100));
//     p.push(make_pair("Abhi",90));

//     while (!p.empty()){
//         cout << p.top().first << " " << p.top().second << endl;
//         p.pop();
//     }

//     return 0;

    
// }

// Heaps Revision 

// class Heap{
//     vector<int>v;
//     public:

//     void push(int val){
//         v.push_back(val);

//         int x = v.size() - 1;
//         int parI = (x - 1) / 2 ;

//         while(parI >= 0 && v[x] < v[parI]){
//             swap(v[x],v[parI]);
//             x = parI;
//             parI = (x - 1) / 2;
//         }

//     }


//     void heapify(int parI){
//         if(parI >= v.size()){
//             return;
//         }

//         int leftChild = 2 * parI + 1;
//         int rightChild = 2 * parI + 2;
//         int maxIdx = parI;
        
//         if(leftChild < v.size() && v[leftChild] < v[maxIdx]){
//             maxIdx = leftChild;
//         }
//         if(rightChild < v.size() && v[rightChild] < v[maxIdx]){
//             maxIdx = rightChild;
//         }

//         swap(v[maxIdx],v[parI]);
//         if(parI != maxIdx){
//             heapify(maxIdx);
//         }
//     }
//     void pop(){
//         swap(v[0],v[v.size() - 1]);
//         v.pop_back();
//         heapify(0);

//     }

//     int top(){
//         return v[0];
//     }

//     bool empty(){
//         return v.size() == 0;
//     }
// };

// NearBy Cars

// class car {
//     public:
//     int idx;
//     int dist;
    
//     car(int idx , int dist){
//         this->idx = idx;
//         this->dist = dist;
//     }

//     bool operator < (const car &obj) const {
//         return this->dist > obj.dist;
//     }
// };

// void nearByCars(vector<pair<int,int>> pos,int k){
//     vector<car>cars;
//     for(int i = 0;i<pos.size();i++){
//         int dist = pos[i].first * pos[i].first + (pos[i].second * pos[i].second);
//         cars.push_back(car(i,dist));
//     }
//     priority_queue<car>pq(cars.begin(),cars.end());
//     for(int i = 0;i<k;i++){
//         cout << "Car" << pq.top().idx << endl;
//         pq.pop();
//     }
    
// }

// Connect N Ropes

// void minLength(vector<int>length){
//     int n = length.size();
//     priority_queue<int , vector<int>,greater<int>>pq(length.begin(),length.end());

//     int ans = 0;
//     while(pq.size() > 1){
//         int min1 = pq.top();
//         pq.pop();
//         int min2 = pq.top();
//         pq.pop();

//         ans += (min1 + min2);
//         pq.push(min1 + min2);
//     }
//     cout << ans;
// }

// Weakest Soldier
// class Row{
//     public:
//     int idx;
//     int count;
//     Row(int count,int idx){
//         this->idx = idx;
//         this->count = count;
//     }
    
// };
// struct compare {
//     bool operator()(const Row &a ,const Row &b)const {
//         if(a.count == b.count){
//             return a.idx > b.idx;
//         }
//         return a.count > b.count;
//     }
// };
// void weakestSoldier(vector<vector<int>> matrix,int k){
//     priority_queue<Row,vector<Row>,compare>pq;
//     for(int i = 0;i<matrix.size();i++){
//         int count = 0;
//         for(int j = 0;j<matrix[i].size() && matrix[i][j] == 1;j++){
//             count++;
//         }
//         pq.push(Row(count,i));
//     }

//     for(int i = 0;i<k;i++){
//         cout << pq.top().idx << endl;
//         pq.pop();
//     }
// };

// Max Sliding Window
void slidingWind(vector<int>arr,int K){
    priority_queue<pair<int,int>>pq;
    for(int i = 0;i<K;i++){
        pq.push(make_pair(arr[i],i));
    }
    cout << pq.top().first << " ";

    for(int i = K;i<arr.size();i++){
        while(!pq.empty() && pq.top().second <= i-K){
            pq.pop();
        }
        pq.push(make_pair(arr[i],i));
        cout << pq.top().first << " ";
    }
    cout << endl;
}

int main(){
    vector<int>arr = {1,3,-1,-3,5,3,6,7};
    int K = 3;
    return 0;
}