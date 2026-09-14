#include <iostream>
#include <list>
#include<algorithm>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// brute Force
// bool intersection(Node* head1,Node* head2){
//     Node* temp1 = head1;
//     Node* temp2 = head2;
//     while(temp1 != NULL){
//         while(temp2 != NULL){
//             if(temp1 == temp2){
//             cout << "Intersection Exist At " << temp1->data << endl;
//             return true;
//         }
//         temp2 = temp2->next;
//         }
//         temp2 = head2;
//         temp1 = temp1->next;

//     }
//     cout << "No Intersection Here\n";
//     return false;
// }

// Efficient Way
// int getIntersection(Node* head1,Node* head2){
//     Node* temp1 = head1;
//     Node* temp2 = head2;

//     while(temp1 != temp2){
//         if(temp1 == NULL){
//             temp1 = head2;
//         } else {
//             temp1 = temp1->next;
//         }
//         if(temp2 == NULL){
//             temp2 = head1;
//         } else {
//             temp2 = temp2->next;
//         }

//     }
//     return temp1->data;
// }

// Quest 2



void printList(list<int> ll){
    for (int x : ll){
        cout << x << "->"; 
    }
    cout << "NULL\n";
}

// void deleteNNodes(list<int> ll,int n,int m){
//     list<int>::iterator temp = ll.begin();
//     list<int> ans;
//     while(temp != ll.end()){
//         int countM = m;
//         int countN = n;
        
//         while(countM != 0){
//             if(temp == ll.end()){
//                 break;
//             }
//             ans.push_back(*temp);
//             temp++;
//             countM--;
//         }
//         while (countN != 0)
//         {
//             if(temp == ll.end()){
//                 break;
//             }
//             temp++;
//             countN--;
//         }
//     }

//     printList(ans);
// }

void swapNodes(list<int>ll,int x,int y){
    auto i = ll.begin();
    auto j = ll.begin();
    
    while(i != ll.end() && *i != x){
        i++;
    }
    
   
    while(j != ll.end() && *j != y){
        j++;
    }
    if(i == ll.end() || j == ll.end()){
        return;
    }
     if(i == j){
        return;
    }

    auto nextJ = next(j);
    auto nextI = next(i);

    
    printList(ll);
}


int main()
{
    std::list<int> ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    
    swapNodes(ll,2,4);
    return 0;
}