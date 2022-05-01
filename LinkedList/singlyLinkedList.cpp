#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    
};
void insertAtfirst(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    if(head == NULL){
        cout << "empty list";
    }
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<endl;
        temp = temp->next;
    }
    cout << endl;
}
//inserting at last
void insertatLast(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    temp = tail;
}
//
//inserting value with position
void insertAtmiddle(Node* &head,int position,int data){
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
        
    }
    //creating a node to be inserted
    Node* tobeinserted = new Node(data);
    tobeinserted -> next = temp->next;
    temp->next = tobeinserted;
}
int main(){
    Node* node1 = new Node(8);
    //cout << node1->data << endl;
    //cout << node1->next;
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    cout << "after insertion at head"<<endl;
    insertAtfirst(head,10);
    insertAtfirst(head,11);
    print(head);
    cout << "insertion at tail"<<endl;
    insertatLast(tail,55);
    //again printing
    print(head);
    cout << "insertion at any position with index"<<endl;
    insertAtmiddle(head,2,45);
    print(head);
    return 0;
}

