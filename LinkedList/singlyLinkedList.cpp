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
    print(head);
    return 0;
}

