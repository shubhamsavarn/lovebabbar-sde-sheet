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
Node* ClldeleteFirst(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete head;
        return NULL;
    }
    Node* curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    second->next = head;
    head = ClldeleteFirst(head);
    
    print(head);
    return 0;
}
