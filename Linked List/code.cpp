#include<iostream>
using namespace std;

class Node {
    public : 
    int data;
    Node* next;
  
    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }

    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
          cout << temp->data <<"->";
          temp = temp->next;  
        }
        cout <<"NULL\n";
    }
    void insert(int val , int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0;i<pos-1;i++){
            if(temp == NULL){
                cout << "position is Invalid\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front(){
        if(head == NULL){
            cout << "Linked List is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
    }
    
    void searchItr(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                cout << idx << endl;
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout << -1 << endl;
    }
    
    int helper(Node* temp,int key){
        if(temp == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }
        int idx = helper(temp->next,key);
        if(idx == -1){
            return -1;
        }else{
            return idx + 1;
        }
    }
    int searchRec(int key){
       return helper(head,key); 
    }

    void reverse(){
        Node* curr = head;
        Node* prev = NULL;
        tail = head; 
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

    int getSize(){
        int sz = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void removeNth(int n){ // basically deteleting from end 
        int size = getSize();
        Node* prev = head;
 
        for(int i = 1;i<(size-n);i++){
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout << "going to Del : " << toDel->data << endl;
        prev->next = prev->next->next;
        delete toDel;
    }

    void swapNodes(int key1 ,int key2){
        if(key1 == key2){
            return;
        }
        Node* temp1 = head;
        Node* temp2 = head;
        while(temp1 != NULL  && temp1->data != key1){
            temp1 = temp1->next;
        }

        while(temp2 != NULL  && temp2->data != key2){
            temp2 = temp2->next;
        }

        if(temp1 == NULL || temp2 == NULL){
            return;
        } 

        Node* firstPrevNode = NULL;
        Node* curr = head;
        while(curr != NULL && curr->next != temp1){
            curr = curr->next;
        }
        firstPrevNode = curr;

        Node* secondPrevNode = NULL;
        curr = head;
        while(curr != NULL && curr->next != temp2){
            curr = curr->next;
        }
        secondPrevNode = curr;

        // If key1 is immediately after key2
        if(temp1->next == temp2){
            if(firstPrevNode != NULL){
                firstPrevNode->next = temp2;
            } else{
                head = temp2;
            }
            temp1->next = temp2->next;
            temp2->next = temp1;
            return;
        }

        // if key 2 is earlier than key1 
        if(temp2->next == temp1){
            if(secondPrevNode != NULL){
                secondPrevNode->next = temp1;
            } else {
                head = temp1;
            }
            temp2->next = temp1->next;
            temp1->next = temp2;
            return;
        }


        // if Nodes are not adjacent
        if(firstPrevNode != NULL){
            firstPrevNode->next = temp2;
        } else {
            head = temp2;
        }
        
        if(secondPrevNode != NULL){
            secondPrevNode->next = temp1;
        } else {
            head = temp1;
        }

        Node* temp = temp1->next;
        temp1->next = temp2->next;
        temp2->next = temp;


    }

    void oddEven(){
        
    }

};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(7);
    ll.push_front(13);
    ll.push_front(10);
    ll.push_front(2);
    ll.push_front(8);
    ll.printList();
    
    
    return 0;
}