#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        next = NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
Node* Reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    while(curr != NULL){
        next = head->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    return prev;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    head -> next = first;
    print(head);
    Node* newhead = Reverse(head);
    print(newhead);
    
    return 0;
}
