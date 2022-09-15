#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    do{
        cout << temp->data<<endl;
        temp = temp->next;
    }
    while(head != temp);
}
Node* insertAtEND(Node* head,int data){
    Node* curr = head;
    while(curr->next !=  head){
        curr = curr->next;
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    second->next = head;
    head = insertAtEND(head,66);
    
    print(head);
    return 0;
}
