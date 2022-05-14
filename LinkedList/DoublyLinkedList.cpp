#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*  prev;
    Node* next;
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "sirf bta rhe hai ki node delte ho gya hai"<<endl;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data<<" "<<endl;
        temp = temp->next;
    }
}
int length(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
//
void insertAtstart(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    
}
void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMiddle(Node* tail,Node* head,int position,int d){
    //insertion at starting
    if(position == 1){
        insertAtstart(head,d);
    }
    int cnt =0;
    Node* temp = head;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    Node* tobeinserted = new Node(d);
    tobeinserted->next = temp->next;
    temp->next = tobeinserted;
    //insertion at end
    while(temp->next == NULL){
        insertAttail(tail,d);
        return;
    }
    
}
void deletenode(Node* &head,int position){
    Node* temp = head;
    if(position == 1){
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;//khud ka constructor call kr ke node delete kr rhe hai
    }
    else{
        //koi v node delete kr rhe hai middle ya last
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (position > cnt){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    //Node* node2 = new Node(20);
    Node* head = node1;
    Node* tail = node1;
    //head->next = node2;
    //print(head);
    //cout << length(head)<<endl;
    //cout << "Adding node at first position"<<endl;
    insertAtstart(head,2);
    insertAtstart(head,14);
    insertAttail(tail,55);
    insertAttail(tail,100);
    insertAtMiddle(tail,head,5,1000);
    print(head);
    deletenode(head,4);
    print(head);
    return 0;
}
